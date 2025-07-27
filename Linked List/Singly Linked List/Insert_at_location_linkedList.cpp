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
void insertFirst(Node *& head,int v){
    Node * temp = new Node(v);
    if(head == NULL){
        head = temp;
    }
    temp->next = head;
    head = temp;
}

void insertLoc(Node *& head,int l,int v){
    Node * nnode = new Node(v);
    Node * temp = head;
    if(l == 1){
        insertFirst(head,v);
        return;
    }
    if(head == NULL){
        head = nnode;
    }
    l-=2;
    while(l--){
        temp = temp->next;
        if(temp == NULL){
            cout << "invalid\n";
            return;
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

    int val,l;
    cin >> l >> val;
    insertLoc(head,l,val);
    travers(head);
}