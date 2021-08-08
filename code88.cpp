#include <bits/stdc++.h>
using namespace std;

bool pairsum(int a[], int n, int k){
    int maxSum=INT_MIN;
    int currsum=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
        if(a[i]+a[j]==k){
            cout<<i<<" "<<j<<endl;
            return true;
            }
        }
    }
    return false; 
}
int32_t main(){
    int n,k;
    cout<<"Enter size of array & k: ";
    cin>>n>>k;

    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<pairsum(a,n,k)<<endl;
    return 0;
}