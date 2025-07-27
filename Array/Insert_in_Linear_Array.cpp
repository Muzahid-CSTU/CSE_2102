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
    int itm;
    cout << "enter the item :" << endl;
    cin >> itm;
    for(int i=n;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=itm;
    n++;
    cout << "after insertion: "; 
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}