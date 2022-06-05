#include <iostream>
using namespace std;

class Node{
public:
    Node(){}
    Node(int d) : data(d){}

    int data;
    Node *next = nullptr;
    Node *prev = nullptr;
};

class DoublyLinkedList{
public:
    DoublyLinkedList(): head(nullptr), tail(nullptr){}

    void insert(int data){
        Node* tmp = new Node(data);

        if(head == nullptr){
            head = tmp;
            tail = tmp;
        }else{ 
            tmp->prev = tail;
            tail->next = tmp;
            tail = tmp;
        }
    }

    void insertFirst(int data){
        Node *tmp = new Node(data);

        tmp->next = head;
        head->prev = tmp;
        head = tmp;
    }

    void insertLast(int data){
        Node *tmp = new Node(data);

        tmp->prev = tail;
        tail->next = tmp;
        tail = tmp;
    }

    void insertAt(int pos, int data){
        Node *tmp = new Node(data);
        Node *cur, *prev;

        cur = head;
        for(int i = 0; i < pos; i++){
            prev = cur;
            cur = cur->next;
        }
        prev->next = tmp;
        cur->prev = tmp;
        tmp->prev = prev;
        tmp->next = cur;
        
    }

    void removeLast(){
        Node * prev, *cur;
        cur = head;
        while(cur->next != nullptr){
            prev = cur;
            cur = cur->next;
        }
        prev->next = nullptr;
        delete cur;
        tail = prev;

    }

    void removeFirst(){
        Node *tmp = head;
        head = head->next;
        head->prev = nullptr;
        delete tmp;
    }


    void removeAt(int pos){
        Node *prev, *cur;
        cur = head;
        for(int i = 0; i < pos; i++){
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        cur->next->prev = prev;
        delete cur;
    }

    void display(){
        Node *h = head;
        
        while(h!= nullptr){
            cout << h->data << endl;
            h = h->next;
        }
        cout << endl;
    }

    void displayReverse(){
        Node *h = tail;
        
        while(h!= nullptr){
            cout << h->data << endl;
            h = h->prev;
        }
        cout << endl;
    }
private:
    Node *head, *tail;
};

int main(){
    DoublyLinkedList list;
    list.insert(60);

    list.insert(20);
    // list.insert(10);
    list.insertFirst(33);

    list.insertLast(69);

    list.insertAt(1,420);

    // list.removeFirst();

    list.display();
    list.displayReverse();

    return 0;
}