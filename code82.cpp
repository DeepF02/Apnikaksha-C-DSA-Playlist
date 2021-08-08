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
    const int N=1e6+2;
    bool check[N];
    for(int i=0; i<N; i++)
    {
        check[i]=0;//false
    }
    for(int i=0; i<n ; i++){
        if(a[i]>=0){
            check[a[i]]=1;//true
        }
    }
    int ans=-1;
    for(int i=1; i<N; i++){//as we need smallest positive no. not 0
        if(check[i] == 0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}