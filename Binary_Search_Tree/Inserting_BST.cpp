#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node * left;
    Node * right;

    Node(int val){
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void Inserting_BST(Node *& root, int v){
    if(root == NULL){
        root = new Node(v);
    }
    else{
        if(v < root->val){
            Inserting_BST(root->left,v);
        }
        else if(v > root->val){
            Inserting_BST(root->right,v);
        }
        else{
            cout << "Duplicate found\n";
        }
    }
}

void in_Order(Node * root){
    if(root == NULL) return;

    in_Order(root->left);
    cout << root->val << " ";
    in_Order(root->right);
}

int main(){
    Node * root = NULL;
    for(int i=1;i<=10;i++){
        Inserting_BST(root,i);
    }

    Inserting_BST(root,15);
    
    in_Order(root); 
    cout << endl;
}