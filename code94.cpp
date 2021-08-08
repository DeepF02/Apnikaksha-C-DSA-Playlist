#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n1,n2,n3;
    cout<<"Enter rows & columns of M1 & column of M2: ";
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];
    //cout<<"Enter elements of Matrix : ";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
           cin>>m1[i][j];
        }
    }
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
           cin>>m2[i][j];
        }
    }
    //initialising ans matrix by 0
    int ans[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
           ans[i][j]=0;
        }
    }
    //Multipling m1*m2
    for(int i=0; i<n1; i++){//for row of m1
        for(int j=0; j<n3; j++){//for column of m2
            for(int k=0; k<n2; k++){//for row of m2 to get exact element of m2
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    //print ans matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}