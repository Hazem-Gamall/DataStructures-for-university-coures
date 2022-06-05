#include <iostream>
using namespace std;


class Queue{

public:
    Queue() : front(-1), rear(-1){}

    void enqueue(int x){
        if((front == 0 && rear == size-1) || (front == rear+1)){
            cout << "queue overflow\n";
            return;
        }
        if(front == -1){
            front++;
            rear++;
        }else{
            if(rear == size-1)
                rear = 0;
            else
                rear++;
        }
        arr[rear] = x;
    }

    void deque(){
        if(front == -1){    //empty
            cout << "Underflow\n";
            return;
        }
        cout << arr[front] << endl;

        if(front == rear){
            front = -1;
            rear = -1;
        }else{
            front = (front+1)%size;
        }
    }

private:
    int arr[5], front, rear, size = 5;
};

int main(){
    Queue q;
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.deque();
    q.deque();
    q.deque();
    q.deque();q.deque();
    

}