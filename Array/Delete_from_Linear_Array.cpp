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
    int p;
    cout << "enter the position: " << endl;
    cin >> p;
    for(int i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    cout << "after Delete: "; 
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}