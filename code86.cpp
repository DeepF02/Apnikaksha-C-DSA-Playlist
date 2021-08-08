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
    int maxSum=INT_MIN;
    int currsum=0;
    for(int i=0; i<n; i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }
    cout<<maxSum<<endl;
    return 0;
}