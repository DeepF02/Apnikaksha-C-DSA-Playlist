#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll decimalToBinary(ll n){
    
    ll ans=0, x=1;

    while(x<=n){
      x*=2; //to get maximum power of 2
    }
    x/=2; 

    while(x>0){
        ll lastdigit = n/x; // to get quotient
        n -= lastdigit*x; //to get n after 1st division
        x/=2; //decrement x by pwer of 2
        ans = ans*10 + lastdigit; //store ans in binary format
    }
return ans;
}
int32_t main(){
    ll n;
    cout<<"Enter any decimal no. : ";
    cin>>n;
    cout<<decimalToBinary(n)<<endl;
}