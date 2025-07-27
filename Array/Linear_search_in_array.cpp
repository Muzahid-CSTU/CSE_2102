
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,itm;
    cout << "Enter the array size: ";
    cin >> n;
    cout << endl;
    int ar[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    cout << endl;
    cout << "Enter the searching item: ";
    cin >> itm;
    cout << endl;
    int pos = -1;
    for(int i=0;i<n-1;i++){
        if(ar[i] == itm){
            pos = i;
        }
    }
    if(pos != -1){
        cout << itm << " Found in position " << pos+1 << endl;
    }
    else cout << itm << " Not found in this array\n";

}
