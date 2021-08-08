#include<bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n){
    
    int ans=0;
    int x=1;
    
    int s=n.size(); //gives size of string n

    for(int i=s-1; i>=0; i--){ //last digit to first
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0'); //firstly converting no. in strings 
        }
        else if(n[i]>='A' && n[i]<='F'){ // for character in capital case 
            ans+=x*(n[i]-'A' + 10);//secondly converting letters in strings
        }
        else if(n[i]>='a' && n[i]<='f'){// for character in lower case 
            ans+=x*(n[i]-'a' + 10);
        }
        x*=16;
    }
return ans;
}
int32_t main(){
    string n;  //as input is in hexadecimal
    cout<<"Enter any hexadecimal no. : ";
    cin>>n;
    cout<<hexadecimalToDecimal(n)<<endl;  // function call
}