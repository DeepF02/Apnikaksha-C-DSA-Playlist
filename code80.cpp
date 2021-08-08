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
    const int N = 1e5+2;//value N can't be changed & N=10^5 + 2 
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }
    int minidx=INT_MAX;

    for(int i=0; i<n; i++)
    {   
        if(idx[a[i]] != -1){
            minidx=min(minidx, idx[a[i]] );
        }
        else{
            idx[a[i]]=i;
        }
    }
        //if we don't get minidx in and value i.e. mindx is int_max only then
    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx + 1<<endl;
    } 
    return 0;
}