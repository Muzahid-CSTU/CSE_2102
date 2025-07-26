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

Node* create_BST(Node * root, int v){
    if(root == NULL){
        root = new Node(v);
    }
    else{
        if(v < root->val){
            root->left = create_BST(root->left,v);
        }
        else if(v > root->val){
            root->right = create_BST(root->right,v);
        }
        else{
            cout << "Duplicate found\n";
        }
    }
    return root;
}

int main(){
    Node * root = NULL;
    for(int i=1;i<=10;i++){
        root = create_BST(root,i);
    }
}