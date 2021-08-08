#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cout<<"Enter no. of rows & columns of 2D array: ";
    cin>>n;

    int a[n][n];
    cout<<"Enter elements of Matrix : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //swap
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //print transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}