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

void create_BST(Node *& root, int v){
    if(root == NULL){
        root = new Node(v);
    }
    else{
        if(v < root->val){
            create_BST(root->left,v);
        }
        else if(v > root->val){
            create_BST(root->right,v);
        }
        else{
            cout << "Duplicate found\n";
        }
    }
}
void pre_Order(Node * root){
    if(root == NULL) return;

    cout << root->val << " ";
    pre_Order(root->left);
    pre_Order(root->right);
}

void Delete_in_BST(Node *& root,int v){
    if(root == NULL){
        cout << "Not found\n";
        return;
    }
    else if(root->val == v){
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        else if(root->left == NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else{
            Node * tmp = root->right;
            while(tmp->left != NULL){
                tmp = tmp->left;
            }
            root->val = tmp->val;
            Delete_in_BST(root->right,tmp->val);
        }
    }
    else if(v < root->val){
        Delete_in_BST(root->left,v);
    }
    else if(v > root->val){
        Delete_in_BST(root->right,v);
    }
}

int main(){
    Node * root = NULL;
    create_BST(root,5);
    create_BST(root,9);
    create_BST(root,2);
    create_BST(root,6);
    create_BST(root,4);
    create_BST(root,7);
    create_BST(root,1);
    create_BST(root,3);
    create_BST(root,8);
    create_BST(root,10);

    pre_Order(root);
    cout << "\n";

    Delete_in_BST(root,5);

    pre_Order(root);
    cout << "\n";
}