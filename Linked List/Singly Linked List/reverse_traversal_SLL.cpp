#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void R_travers(Node *head)
{
    if(head == NULL) return;
    R_travers(head->next);
    cout << head->val <<" ";
}
int main()
{
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

    R_travers(head);
    return 0;
}