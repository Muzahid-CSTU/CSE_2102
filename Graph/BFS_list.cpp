#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

class node{
public:
    int val;
    node* next;

    node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

class myQueue
{
public:
    node* head = NULL;
    node * tail = NULL;
    int sz = 0;
    void q_push(int val){
        sz++;
        node * newnode = new node (val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail -> next= newnode;
        tail = tail->next;
    }

    void q_pop(){
        sz--;
        if(head == NULL) return;

        node * dlt = head;
        head = head->next;
        delete dlt;
    }

    int q_front(){
        return head->val;
    }
    int q_size(){
        return sz;
    }
    bool q_empty(){
        if(sz == 0) return true;
        else return false;
    }
};

void BFS(int src){
    myQueue q;
    q.q_push(src);
    vis[src] = true;
    while(!q.q_empty()){
        int par = q.q_front();
        q.q_pop();
        cout << par << endl;
        for(int child : v[par]){
            if(vis[child] != true){
                q.q_push(child);
                vis[child] = true;
            }
        }
    }
}

int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    for(int i = 0; i <= 1005; i++){
        vis[i] = false;
    }
    BFS(src);
    return 0;
}