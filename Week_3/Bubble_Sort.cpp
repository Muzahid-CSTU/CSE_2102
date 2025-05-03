#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    int ar[n];
    cout << "Enter array elements " << endl;
    for (int i = 0;i < n;i++)
    {
        cin >> ar[i];
    }
    int i = n - 1;
    while (i)
    {
        int flg = 1;
        for (int j = 0; j < i;j++)
        {
            if (ar[j] > ar[j + 1])
            {
                flg = 0;
                swap(ar[j], ar[j + 1]);
            }
        }
        if (flg){
            break;
        }
        i--;
    }
    cout << "Sorted in ascending order: ";
    for (int i = 0; i < n;i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
