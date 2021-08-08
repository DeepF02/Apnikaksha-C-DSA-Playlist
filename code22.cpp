#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n>10){
       cout<<"more than 10\n";
   }
   else if(n<10){
       cout<<"less than 10\n";
   }
   else{
       cout<<"equals to 10\n";
   }

   return 0;
}