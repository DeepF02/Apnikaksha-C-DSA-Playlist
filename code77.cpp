#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int curr=0;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        curr=0;
        for(int j=i; j<n; j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }         
    }
    return 0;
}