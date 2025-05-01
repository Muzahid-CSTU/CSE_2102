#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,itm;
    cout << "Enter the array size: ";
    cin >> n;
    int ar[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    cout << "Enter the searching item: ";
    cin >> itm;
    int flg = 0;
    for(int i=0;i<n-1;i++){
        if(ar[i] == itm){
            flg = 1;
        }
    }
    if(flg == 1){
        cout << itm << " Found\n";
    }
    else cout << itm << " Not found in this array\n";

}
