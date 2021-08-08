#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int mx=INT_MIN;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;         
    }
    return 0;
}