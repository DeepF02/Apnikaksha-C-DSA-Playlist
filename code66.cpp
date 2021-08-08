#include<bits/stdc++.h>
using namespace std;

int decimalToOctal(int n){
    
    int ans=0;
    int x=1;

    while(x<n){
      x*=8; 
    }
    //x/=2; 

    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=8;
        ans = ans*10 + lastdigit;
    }
return ans;
}
int32_t main(){
    int n;
    cout<<"Enter any decimal no. : ";
    cin>>n;
    cout<<decimalToOctal(n)<<endl;
}