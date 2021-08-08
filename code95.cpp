#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,m;
    cout<<"Enter no. of rows & columns of 2D array: ";
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];
    cout<<"Enter elements of Matrix : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cin>>a[i][j];
        }
    }
    int r=0, c=n-1;
    bool found=false;
    while(r<m and c>=0)
    {
        if(a[r][c]==target){
            found=true;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element doesn't exist\n";
    }
    return 0;
}