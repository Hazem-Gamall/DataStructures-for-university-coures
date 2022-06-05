#include <iostream>
using namespace std;

class Node{
public:
    Node(int d) : data(d){}
    Node(){}

    Node *next = nullptr;
    int data;
};

class CircularLinkedList{
public:

    CircularLinkedList() : head(nullptr){}

    void insert(int data){
        Node *tmp = new Node(data);

        if(head == nullptr){
            head = tmp;
            tmp->next = head;
        }else{
            Node *h = head;
            while(h->next != head){
                h = h->next;
            }
            tmp->next = head;
            h->next = tmp;
        }
    }
    
    void insertFirst(int data){
        Node *old_head = head;
        Node *tmp = new Node(data);
        tmp->next  = head;
        head = tmp;

        Node *h = head->next;
        while(h->next != old_head){
            h = h->next;
        }
        h->next = head;
    }

    void insertAt(int pos, int data){
        Node *tmp = new Node(data);
        Node *cur = head;
        for(int i = 1; i<pos; i++){
            cur = head->next;
        }
        tmp->next = cur->next;
        cur->next = tmp;
    }

    void display(){
        Node *h = head;
        while(h != nullptr){
            cout << h->data << " ";
            h = h->next;
            if(h == head)   h = nullptr;
        }
        cout << endl;
    }

    void remove(){
        Node *cur, *prev;
        cur = head;

        while(cur->next != head){
            prev = cur;
            cur = cur->next;
        }
        prev->next = head;

        delete cur;
    }

    void removeFirst(){
        Node *old_head = head;
        head = head->next;
        Node* h = head;

        while(h->next != old_head){
            h = h->next;
        }
        h->next = head;

    }

    void removeAt(int pos){
        Node *cur, *prev;
        cur = head;
        for(int i = 0; i < pos; i++){
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;

        delete cur;
    }



private:
    Node *head;
};

int main(){
    CircularLinkedList list;

    list.insert(20);
    list.insert(60);
    list.insert(34);
    list.insertFirst(69);
    list.insertAt(1,72);
    list.display();
    cout << endl;
    list.removeAt(3);
    list.display();

    return 0;
}