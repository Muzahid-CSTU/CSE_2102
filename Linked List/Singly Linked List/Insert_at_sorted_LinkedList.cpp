#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node * next;

    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

void insertsort(Node *& head,int v){
    Node * nnode = new Node(v);
    Node * temp = head;
    
    if(head == NULL){
        head = nnode;
    }
    if(head->val > v){
        nnode->next = head;
        head = nnode;
        return;
    }
    while(temp->next != NULL){
        if(temp->next->val <= v){
            temp = temp->next;
        }
        else{
            break;
        }
    }
    nnode->next = temp->next ;
    temp->next = nnode;
}

void travers(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node  * head = new Node(10);
    Node  * a = new Node(20);
    Node  * b = new Node(30);
    Node  * c = new Node(40);
    Node  * d = new Node(50);
    Node  * e = new Node(60);
    Node  * f = new Node(70);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    int val;
    cin >> val;
    insertsort(head,val);
    travers(head);
}