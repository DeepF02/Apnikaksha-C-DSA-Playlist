#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n+1];//as we have to include last elment as well 
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    a[n]=-1;//for satisfing 2nd condition
    if(n==1){//if user inputs only single element
        cout<<"1"<<endl;
        return  0;
    }
    int ans=0;
    int mx=INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(a[i]>mx && a[i]>a[i+1]){//checking both condition 1 & 2
            ans++;
        }
        mx=max(a[i],mx);//checking next maximum element
    }
    cout<<ans<<endl;
    return 0;
}