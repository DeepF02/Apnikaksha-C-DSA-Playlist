#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n,s;
    cout<<"Enter size & req sum of array : ";
    cin>>n>>s;

    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int i=0, j=0; int st=-1, en=-1; int sum=0;
    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum == s)
    {
        cout<< i+1 <<" "<<j<<endl;//i+1 cause we need index output from 1
        return 0;
    }
    while(j<n)
    {
        sum += a[j];
        while(sum > s)
        {
            sum-=a[i];
            i++;
        }
        if(sum == s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}