#include<bits/stdc++.h>
using namespace std;

//as we are appending ans in reverse direction we need to reverse our ans
int reverse(int n){
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans=ans*10 +lastdigit;
        n/=10;
    }
    return ans;
}
int addBinary(int a,int b){
    
    int ans=0;
    int prevCarry=0;// variable for storing carry

    while(a>0 && b>0 )//checking last digit is 0 or 1
    {
      if(a%2==0 && b%2==0)
      {   
          ans= ans*10 + prevCarry; //previous carry will be added to ans if any
          prevCarry=0;// carry genrated '0'
      }
      else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
      {
          if(prevCarry==1)
          {
              ans=ans*10 + 0;//as ans will be 0
              prevCarry=1;
          }
          else
          {
              ans=ans*10 + 1; //as ans will be 1
              prevCarry=0;
          }
      }
      else{
          ans=ans*10 + prevCarry;
          prevCarry=1;
      }
      a/=10; b/=10;
    }
    //what is b is storter no. then a or viceversa then..
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
               ans=ans*10 + 0;
               prevCarry=1; 
             }
            else{
                ans=ans*10 + 1;
                prevCarry=0; 
             }
        }
        else{
            ans=ans*10 +(a%2);
        }
        a/=10;
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
               ans=ans*10 + 0;
               prevCarry=1; 
             }
            else{
                 ans=ans*10 + 1;
                prevCarry=0; 
             }
        }
        else{
            ans=ans*10 +(b%2);
        }
        b/=10;
    }
    // what is both no.'s are completed but still we have a carry left then..
    if(prevCarry==1){
        ans=ans*10 + 1; //appending the carry to ans
    }
    ans = reverse(ans);//reversing ans before returning
return ans;
}

int32_t main(){
    int a,b;
    cout<<"Enter any two binary no.'s : ";
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
}