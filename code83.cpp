#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<"    ";
        }
        cout<<"\t";
    }
    return 0;
}