#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int d) : data(d), left(NULL), right(NULL){}
};

class BinarySearchTree{
public:
    BinarySearchTree() : root(NULL){}

    void insert(int data){
        Node *temp = new Node(data);
        Node *prev, *cur;
        if(root == NULL){
            root = temp;
        }else{
            cur = root;
            while(cur!=0){
                prev = cur;
                if(data > cur->data)   cur = cur->right;
                else    cur= cur->left;
            }
            if(data > prev->data)   prev->right = temp;
            else    prev->left = temp;
        }
    }

    Node* getRoot(){return root;}

    void inOrder(Node* n){
        if(n == NULL)   return;
        else{
            if(n->left != NULL){
                inOrder(n->left);
            }
            cout << n->data << "\t";
            if(n->right != NULL){
                inOrder(n->right);
            }
        }
    }

    void preOrder(Node *n){
        if(n == NULL)   return;
        cout << n->data <<"\t";
        if(n->left != NULL){
            preOrder(n->left);
        }
        if(n->right != NULL){
            preOrder(n->right);
        }
    }


    void postOrder(Node *n){
        if(n == NULL)   return;
        if(n->left != NULL){
            postOrder(n->left);
        }
        if(n->right != NULL){
            postOrder(n->right);
        }
        cout << n->data <<"\t";
    }
private:
    Node *root;
};

int main(){
    BinarySearchTree t;
    t.insert(4);
    t.insert(3);
    t.insert(1);
    t.insert(7);
    t.insert(5);
    t.insert(6);

    t.inOrder(t.getRoot());
    cout << endl;
    t.preOrder(t.getRoot());
    cout << endl;
    t.postOrder(t.getRoot());
    return 0;
}