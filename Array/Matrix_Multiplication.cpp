#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,p,q;
    cin >> m >> p >> q >> n;
    int a[m][p];
    int b[q][n];
    int c[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            cin >> b[i][j];
        }
    }
    if(p!=q){
        cout << "can not Multiply \n";
        return 0;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j] = 0;
            for(int k=0;k<p;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}