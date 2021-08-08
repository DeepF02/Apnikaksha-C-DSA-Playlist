#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;

void permute(vector<int>a, int idx)
{
    //base case
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }

    sort(a.begin(),a.end());
    
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
    return;
}

int32_t main()
{
    int n; cin>>n;
    vector<int>a(n);
    for(auto &i:a)
       cin>>i;
    permute(a, 0);
    for(auto v:ans){
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}