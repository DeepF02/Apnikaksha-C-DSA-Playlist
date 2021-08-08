#include <bits/stdc++.h>
using namespace std;

bool pairsum(int a[], int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else{
            low++;
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
    for(int i=1; i<n; i++)//as last element doesn't need to be swaped
    {
            int current=a[i];
            int j=i-1;
            while(a[j]>current && j>=0){
                a[j+1]=a[j];//2nd element gets vallue 
                j--;
            }
            a[j+1]=current;
    }

    cout<<pairsum(a,n,k)<<endl;
    return 0;
}