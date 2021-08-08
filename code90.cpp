#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,m;
    cout<<"Enter no. of rows & columns of 2D array: ";
    cin>>n>>m;

    int a[n][m];
    cout<<"Enter elements of Matrix : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cin>>a[i][j];
        }
    }
    
    cout<<"Matrix is :\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}