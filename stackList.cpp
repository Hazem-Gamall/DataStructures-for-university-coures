#include <iostream>
using namespace std;

class Node{
public:
    Node(){}
    Node(int d) : data(d){}

    int data;
    Node *next = nullptr;
};

class Stack{
public:
    Stack() : top(nullptr){}

    void push(int data){
        Node *tmp = new Node(data);
        if(top == nullptr){
            top = tmp;
        }else{
            tmp->next = top;
            top = tmp;
        }
        
    }

    int pop(){
        if(top == nullptr)
            cout << "Stack Underflow\n";
        else{
            Node *tmp = top;
            top = top->next;
            return tmp->data;
        }
    }

private:
    Node *top;
};


int main(){
    Stack s;
    s.push(10);
    s.push(32);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;cout << s.pop() << endl;
}