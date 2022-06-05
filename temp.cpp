#include <iostream>

using namespace std;


/***SignlyLinkedList***/
// struct node{
//     int data;
//     node* next;
// };

// class SingleyList{
// public:
//     SingleyList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void createNode(int data){
//         node *temp = new node();
//         temp->data = data;
//         temp->next = NULL;
        
//         if(head == NULL){
//             head = temp;
//             tail = temp;
//             temp = NULL;
//         }else{
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     void insertFirst(int data){
//         node *temp = new node();
//         temp->data = data;
//         temp->next = head;

//         head = temp;
//     }

//     void insertLast(int data){
//         node *temp = new node;
//         temp->data = data;
//         temp->next = NULL;

//         tail->next = temp;
//         tail = temp;
//     }

//     void insert_position(int pos, int data){
//         node *temp = new node;
//         node *cur, *prev;

//         cur = head;

//         for(int i = 1; i < pos; i++){
//             prev = cur;
//             cur = cur->next;
//         }

//         prev->next = temp;
//         temp->data = data;
//         temp->next = cur;
//     }

//     void delete_first(){
//         node *temp = head;
//         head = head->next;

//         delete temp;
//     }

//     void delete_last(){
//         node *pre, *cur;
//         cur = head;

//         while(cur->next != NULL){
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = NULL;
//         tail = pre;
//         delete cur;
//     }

//     void delete_position(int pos){
//         node *pre, *cur;
//         cur = head;

//         for(int i = 1; i < pos; i++){
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = cur->next;

//         delete cur;
//     }

//     void display(){
//         node* temp = head;

//         while(temp != NULL){
//             cout << temp->data << "\t";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

// private:
//     node *head, *tail;
// };

// int main(){
//     SingleyList s;

//     s.createNode(20);
//     s.createNode(50);
//     s.createNode(34);

//     s.insertFirst(11);

//     s.insertLast(69);

//     s.insert_position(3,3);



//     s.delete_first();
//     s.delete_last();

//     s.delete_position(2);

//     s.display();
// }


/***DoublyLinkedList***/

// struct node{
//     node *next;
//     node *prev;
//     int data;
// };

// class DoublyList{
// public:
//     DoublyList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void createNode(int value){
//         node *temp = new node;
//         temp->data = value;
//         temp->next = NULL;
//         temp->prev = NULL;

//         if(head == NULL){
//             head = temp;
//             tail = temp;
//         }else{
//             temp->prev = tail;
//             tail->next = temp;
//             tail = temp;
//         }

//     }

//     void insertFirst(int value){
//         node *temp = new node;
//         temp->data = value;

//         temp->next = head;
//         temp->prev = NULL;
        
//         head->prev = temp;

//         head = temp;
//     }

//     void insert_position(int pos, int value){
//         node *cur, *prev, *temp = new node;
//         temp->data = value;

//         cur = head;

//         for(int i = 1; i < pos; i++){
//             prev = cur;
//             cur = cur->next;
//         }
//         temp->next = cur;
//         cur->prev = temp;

//         prev->next = temp;
//         temp->prev = prev;
//     }

//     void delete_last(){
//         node *temp = tail;
//         tail = tail->prev;
//         tail->next = NULL;
//         delete temp;
//     }

//     void delete_first(){
//         node *temp = head;
//         head = head->next;
//         head->prev = NULL;

//         delete temp;
//     }

//     void delete_position(int pos){
//         node *cur, *pre;
//         cur = head;
//         for(int i = 1; i < pos; i++){
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = cur->next;
//         delete cur;
//         cur = pre->next;
//         cur->prev = pre;
//     }

//     void display(){
//         node *temp = head;
//         while(temp != NULL){
//             cout << temp->data << "\t";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

// private:
//     node *head, *tail;
// };


// int main(){
//     DoublyList d;
//     d.createNode(22);
//     d.createNode(34);

//     d.insertFirst(420);

//     d.insert_position(2,69);

//     // d.delete_first();
//     d.delete_position(3);
//     d.display();
//     return 0;
// }

/***CircuilarList***/

// struct node{
//     node *next;
//     int data;
// };

// class CircuilarList{
// public:
//     CircuilarList(){
//         head = NULL;
//     }

//     void createNode(int value){
//         node *temp = new node;
//         temp->data = value;

//         if(head == NULL){
//             head = temp;
//             temp->next = head;
//         }else{
//             node *cur = head;
//             while(cur->next != head){
//                 cur = cur->next;
//             }
//             cur->next = temp;
//             temp->next = head;
//         }
//     }

//     void insert_first(int value){
//         node *temp = new node;
//         node *cur, *oldHead = head;

//         temp->data = value;
//         temp->next = head;
//         head = temp;
//         cur = oldHead;
//         while(cur->next != oldHead){
//             cur = cur->next;
//         }
//         cur->next = head;
//     }

//     void insert_position(int pos, int value){
//         node *temp = new node;
//         temp->data = value;
//         node *pre, *cur;
//         cur = head;

//         for(int i = 1; i < pos; i++){
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = temp;
//         temp ->next = cur;
//     }

//     void delete_first(){
//         node *oldHead, *cur;
//         oldHead = head;
//         head = head->next;

//         cur = oldHead;

//         while(cur->next != oldHead){
//             cur = cur->next;
//         }
//         cur->next = head;

//         delete oldHead;
//     }

//     void delete_last(){
//         node *pre, *cur;

//         cur = head;

//         while(cur->next != head){
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = head;

//         delete cur;
//     }

//     void delete_position(int pos){
//         node *pre, *cur;

//         cur=head;

//         for(int i = 1; i < pos; i++){
//             pre = cur;
//             cur = cur->next;
//         }
//         pre->next = cur->next;
//         delete cur;
//     }

//     void display(){
//         node *cur = head;

//         while(cur != NULL){
//             cout << cur->data << "\t";
//             cur = cur->next;
//             if(cur == head)   cur = NULL;
//         }
//         cout << endl;
//     }


// private:
//     node *head;
// };

// int main(){
//     CircuilarList c;

//     c.createNode(22);
//     c.createNode(124);
//     c.createNode(48);
//     c.createNode(33);

//     c.insert_first(69);

//     c.insert_position(3,420);

//     c.delete_position(4);

//     c.display();
// }


/***ArrayStack***/

// class Stack{
// public:
//     Stack(){}

//     void push(int value){
//         if(top >= n-1){
//             cout << "stackoverflow!!\n";
//         }else{
//             top++;
//             arr[top] = value;
//         }
//     }

//     void pop(){
//         if(top <= -1){
//             cout << "stack underflow!!\n";
//         }else{
//             cout << arr[top] << endl;
//             top--;
//         }
//     }

//     void display(){
//         if(top >= 0){
//             for(int i = top; i > -1; i--){
//                 cout << arr[i] << "\t";
//             }
//             cout << endl;
//         }else{
//             cout << "Empty\n";
//         }
//     }

// private:
// int arr[5], top = -1, n =5;
// };

// int main(){
//     Stack s;

//     s.push(2);
//     s.push(34);
//     s.push(43);
//     s.push(420);
//     s.push(69);
//     s.push(122);

//     s.display();

//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();
//     s.pop();

//     s.display();

//     return 0;
// }


/***ListStack***/

// struct node{
//     node *next;
//     int data;
// };

// class StackList{
// public:

//     StackList(){
//         top = NULL;
//     }

//     void push(int value){
//         node *temp = new node;
//         temp->data = value;
//         temp->next = top;
//         top = temp;
//     }

//     void pop(){
//         if(top == NULL){
//             cout << "stack underflow!!" << endl;
//         }else{
//             node *temp = top;
//             cout << top->data << endl;
//             top = top->next;
//             delete temp;
//         }
//     }

//     void display(){
//         if(top == NULL){cout << "Empty!!\n";return;}
//         node *temp = top;
//         while(top != NULL){
//             cout << top->data << "\t";
//             top = top->next;
//         }
//         cout << endl;
//     }

// private:
//     node *top;
// };


// int main(){
//     StackList sl;
//     sl.push(223);
//     sl.push(32);
//     sl.pop();
//     sl.pop();
//     sl.pop();
//     sl.display();
    
//     return 0;
// }

/***ArrayQueue***/

// class Queue{
// public:

//     void enqueue(int value){
//         if(rear == n-1){
//             cout << "Queue overflow!!\n";
//         }else{
//             if(front == -1) ++front;
//             arr[++rear] = value;
//         }
//     }

//     void dequeue(){
//         if(front == -1 || front > rear){
//             cout << "Queue underflow!!\n";
//         }else{
//             cout << arr[front--] << endl;
//         }
//     }
    
//     void display(){
//         if(front == -1) cout << "Empty!!\n";
//         for(int i = front; i <= rear; i++){
//             cout << arr[i] << "\t";
//         }
//         cout << endl;
//     }

// private:
// int arr[5], n = 5, front = -1, rear = -1;
// };

// int main(){
//     Queue q;
//     q.enqueue(24);
//     q.enqueue(44);
//     q.enqueue(33);

//     q.display();

//     return 0;
// }

/***CircuilarQueue***/

// class CircQueue{
// public:
//     void enqueue(int value){
//         if((front == 0 && rear == n-1) || front == rear +1){
//             cout << "Queue overflow!!\n";
//         }else{
//             if(front == -1){
//                 ++front;
//                 ++rear;
//             }else{
//                 if(rear == n-1){
//                     rear = 0;
//                 }else{
//                     ++rear;
//                 }
//             }
//             ar[rear] = value;
            
//         }
//     }

//     void dequeue(){
//         if(front == -1){
//             cout << "Queue underflow!!\n";
//         }else{
//             cout << ar[front] << endl;
//             if(front == rear){
//                 front = -1;
//                 rear = -1;
//             }else{
//                 if(front == n-1){
//                     front = 0;
//                 }else{
//                     front++;
//                 }
//             }
//         }
//     }

//     void display(){
//         if(front == -1){
//             cout << "Empty";
//         }else{
//             if(front <= rear){
//                 while(front <=rear){
//                     cout << ar[front++] << "\t";
//                 }
//             }else{
//                 while(front <= n-1){
//                     cout << ar[front++] << "\t";
//                 }
//                 front = 0;
//                 while(front <= rear){
//                     cout << ar[front++] << "\t";
//                 }
//             }
//         }
//         cout << endl;

//     }

// private:
// int ar[5], n = 5, front = -1, rear = -1;
// };

// int main(){
//     CircQueue c;
//     c.enqueue(23);
//     c.enqueue(12);
//     c.enqueue(45);
//     c.enqueue(341);
//     c.enqueue(333);
//     c.dequeue();
//     c.enqueue(69);
//     c.display();
//     return 0;
// }

/***ListQueue***/

struct node{
    node *next;
    int data;
};

class QueueList{
public:
    QueueList(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value){
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        if(front == NULL){
            front = temp;
            rear = temp;
        }else{
            rear->next = temp;
            rear = temp;
        }
    }

    void dequeue(){
        if(front == NULL){
            cout << "Queue Underflow!!!\n";
        }else{
            cout << front->data << endl;
            node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    void display(){
        if(front == NULL){
            cout << "Empty\n";
        }else{
            node *temp = front;
            while(temp != NULL){
                cout << temp->data << "\t";
                temp = temp->next;
            }
            cout << endl;
        }
    }

private:
    node *front, *rear;
};

int main(){
    QueueList q;
    q.enqueue(24);
    q.enqueue(345);
    q.enqueue(420);
    q.dequeue();
    q.display();

    return 0;
}