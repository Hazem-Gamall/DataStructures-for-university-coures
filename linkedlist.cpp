#include <iostream>
#include <vector>

using namespace std;


class Node{
public:
    Node(){}
    Node(int d) : data(d){}

    int data;
    Node *next = nullptr;
};

class LinkedList{
public:
    LinkedList() : head(nullptr), tail(nullptr), list_size(0) {}

    void insert(int d){
       Node* tmp = new Node(d);

       if(head == nullptr){
           head = tmp;
           tail = tmp;
       }else{
           tail->next = tmp;
           tail = tmp;
       }
       list_size++;
    }

    void insertAt(int pos, int d){
        if(pos > list_size) return;

        Node* prev;
        Node* cur;
        Node* tmp;

        cur = head;

        for(int i = 0; i < pos; i++){
            prev = cur;
            cur = cur->next;
        }

        tmp = new Node(d);
        tmp->next = cur;
        prev->next = tmp;
        list_size++;
    }

    void insertFirst(int d){
        Node* tmp = new Node(d);

        tmp->next = head;

        head = tmp;
        list_size++;
    }

    void display(){
        
        Node *h = head;
        
        while(h!= nullptr){
            cout << h->data << endl;
            h = h->next;
        }
    }

    int getFirst(){
        return head->data;
    }

    int getLast(){
        return tail->data;
    }

    int get(int pos){
        if(pos >= list_size) return -1;
        Node *tmp = head;
        for(int i = 0; i < pos; i++){
            tmp = tmp->next;
        }
        return tmp->data;
    }

    void removeFirst(){
        if(list_size == 0) return;
        Node *tmp;
        tmp = head;
        head = head->next;
        delete tmp;
    }

    void removeLast(){
        Node *cur;
        Node *prev;

        cur = head;
        while(cur->next != nullptr){
            prev = cur;
            cur = cur->next;
        }
        tail = prev;
        prev->next = nullptr;

        delete cur;
    }

    void remove(int pos){
        if(pos >= list_size) return;
        if(pos == 0){removeFirst(); return;}
        if(pos == list_size-1){removeLast(); return;}
        Node *pre;
        Node *cur;
        Node *tmp;
        cur = head;
        for(int i = 1; i <= pos; i++){
            pre = cur;
            cur = cur->next;
        }
        tmp = cur->next;
        pre->next = tmp;
        delete cur;
    }

    int size(){
        return list_size;
    }



private:
    Node *head, *tail;
    int list_size;
};

int main(){
    LinkedList *list = new LinkedList();


    list->insert(25);
    list->insert(50);
    list->insert(90);
    list->insert(40);
    list->insert(75);
    list->insert(880);
    list->insert(650);
    // cout << "first: " << list->getFirst() << " Last " << list->getLast() << endl; 

    // list->display();

    // cout << "size " << list->size() << endl << endl;

    list->remove(6);
    // list->removeFirst();
    // list->removeLast();
    list->display();

    return 0;
}