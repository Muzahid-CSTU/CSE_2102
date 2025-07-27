#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {45,28,52,25,60,70};
    int h[6];
    for(int i=0;i<6;i++){
        h[i] = a[i];
        int k = i;
        while(k != 0){
            int p = (k-1)/2;
            if(h[k] > h[p]){
                int t = h[k];
                h[k] = h[p];
                h[p] = t;
                k = p;
            }
            else{
                break;
            }
        }
            
    }

    for(int i=0;i<6;i++){
        cout << h[i] << " ";
    }
}