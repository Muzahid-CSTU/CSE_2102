#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size: " << endl;
    cin >> n;
    int a[100];
    cout << "enter elements " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        int ptr = 0;
        int intrchng = 0;
        while(ptr <= n-i){
            if(a[ptr] > a[ptr+1]){
                swap(a[ptr],a[ptr+1]);
                intrchng = 1;
            }
            ptr++;
        }
        if(intrchng == 0){
            break;
        }
    }

    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}