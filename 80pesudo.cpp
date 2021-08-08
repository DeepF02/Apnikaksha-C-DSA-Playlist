#include<bits/stdc++.h>
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
    int ans;
    //int count=0;
    int x;
    int mx=INT_MAX;

    for(int i=0; i<n; i++)
    {   x=a[i];
       int count=0;
        for(int j=0; j<n; j++){
        if( a[i]==a[j] )
        {
            break;
        }
        else if(x==a[j])
        {
            count+=1;
        }
        mx=count;
        //ans=min(mx,ans);
        }
        ans=min(mx,ans);
    }
    cout<<ans<<endl;
    return 0;
}