#include<iostream>
using namespace std;

int main(){

   int a, b, i;
   cout<<"Enter a range : ";
   cin>>a>>b;

   for(int num=a; num<=b; num++){
       for(i=2; i<num; i++){
       if(num%i==0){
           //cout<<"non-prime"<<endl;
           break;
       }
       }
      if(i==num){
       cout<<i<<endl;
       }
   }
    return 0;
}