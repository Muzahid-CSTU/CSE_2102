
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
        for(int j=i+1;j<n;j++){
            if(ar[i] > ar[j]){
                int t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    }

    int l = 0, r = n-1, m = (l+r)/2;
    while(l<=r){
        m = (l+r)/2;
        if(itm == ar[m]){
            pos = m;
            break;
        }
        else if(itm < ar[m]){
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    
    if(pos != -1){
        cout << itm << " Found " << endl;
    }
    else cout << itm << " Not found in this array\n";

}
