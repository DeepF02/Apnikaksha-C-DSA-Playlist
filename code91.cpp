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
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element isn't found\n";
    }
    return 0;
}