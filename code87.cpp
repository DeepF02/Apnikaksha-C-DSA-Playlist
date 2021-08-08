#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n){
    int maxSum=INT_MIN;
    int currsum=0;
    for(int i=0; i<n; i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }
    return maxSum; 
}
int32_t main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum;
    int totalsum=0;
    nonwrapsum=kadane(a, n);
    for(int i=0; i<n; i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum + kadane(a,n);//wrapsumm=totalsum - (-kadane(a,n));
    cout<<max(wrapsum, nonwrapsum)<<endl;
    return 0;
}