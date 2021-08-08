#include<bits/stdc++.h>
using namespace std;

string decimalToHexadecimal(int n){
    
    string ans="";//empty string
    int x=1;

    while(x<n){
      x*=16; 
    }
    //x/=2; 

    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=16;

        if(lastdigit <=9){
           ans = ans + to_string(lastdigit);  //converts int to sting  
        }
        else{
            char c= 'A' + lastdigit - 10;
            ans.push_back(c); //inserts new element at the end of ans
        }
    }
return ans;
}

int32_t main(){
    int n;
    cout<<"Enter any decimal no. : ";
    cin>>n;
    cout<<decimalToHexadecimal(n)<<endl;
}