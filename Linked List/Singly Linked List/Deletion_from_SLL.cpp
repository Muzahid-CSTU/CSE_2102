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
void delete_head(Node* &head)
{
    Node* dltNode=head;
    head=head->next;
    delete dltNode;
}
void delete_pos(Node *& head, int pos)
{
    if(pos == 0){
        delete_head(head);
        return;
    }
    Node * tmp = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        tmp = tmp->next;
    }
    Node* dltNode=tmp->next;
    tmp->next = tmp->next->next;
    delete dltNode;
}
void travers(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

    int pos;
    cout << "position you want to delete: " << endl;
    cin >> pos;

    delete_pos(head, pos);
    travers(head);
    return 0;
}