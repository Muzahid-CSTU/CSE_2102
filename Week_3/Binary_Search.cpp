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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i] > ar[j]){
                int t = ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    }
    cout << "the array is: ";
    for(int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
    cout << "\nEnter the searching item: ";
    cin >> itm;
    int flg = 0,loc = -1;
    int l = 0, r = n-1,mid,k=7;
    while(l<=r){
        mid = (r+l)/2;
        if(ar[mid] == itm){
            flg = 1;
            loc = mid;
            break;
        }
        else if(itm < ar[mid]){
            r = mid - 1;
        }
        else if(itm > ar[mid]){
            l = mid + 1;
        }
    }
    if(flg == 1){
        cout << itm << " Found" << endl;
    }
    else cout << itm << " Not found in this array\n";

}
