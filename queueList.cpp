#include <iostream>
using namespace std;

struct Node{
    Node *next = nullptr;
    int data;

    Node(int d): data(d){}
};

class QueueList{

public:
    QueueList() : front(nullptr), rear(nullptr){}

    void enque(int data){
        Node * tmp = new Node(data);
        if(front == nullptr){
            front = tmp;
            rear = tmp;
        }else{
            rear->next = tmp;
            rear = rear->next;
            
        }
    }

    void deque(){
        if(front == nullptr){
            cout << "Queue underflow!\n";
            return;
        }
        cout << front->data << endl;

        Node *tmp;
        tmp = front;
        front = front->next;
        delete tmp;
    }

    void display(){
        Node *tmp = front;

        while(tmp != nullptr){
            cout << tmp->data << "\t";
            tmp = tmp->next;
        }
        cout << endl;
    }

private:
    Node *front, *rear;
};


int main(){
    QueueList q;

    q.enque(5);
    q.enque(7);
    q.deque();
    q.enque(0);
    q.enque(4);
    q.deque();
    q.deque();
    q.enque(50);
    q.enque(70);
    q.deque();
    q.enque(0);
    q.enque(40);

    // q.enque(5);
    // q.enque(7);
    // q.deque();
    // q.enque(0);
    // q.enque(4);

    q.display();


}