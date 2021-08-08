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
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1; i<=n; i++){
        currsum[i]=currsum[i-1] + a[i-1];//stores cummulative sum of given array
    }
    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum=currsum[i]-currsum[j];
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}