#include <iostream>
using namespace std;

class Stack{
public:
    Stack(): top(-1){}

    void push(int d){
        if(top >= 10)
            cout << "Stack Overflow\n";
        else{
            top++;
            arr[top] = d;
        }
    }

    int pop(){
        if(top <= -1)
            cout << "Stack Underflow\n";
        else
            return arr[top--];
    }

private:
    int top;
    int arr[10];
};

int main(){
    Stack s;
    s.push(22);
    s.push(33);

    cout << s.pop() << endl;

}