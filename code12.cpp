#include<iostream>
using namespace std;

int main(){
   int sum=0, n;
   cout<<"Enter a number : ";
   cin>>n;

   for(sum=0;n>=0;sum++){
       sum+=n;
       cout<<"Enter a number : ";
       cin>>n;
   }//while(n>=0);
   cout<<"\nThe sum is "<<sum<<endl;
   
    return 0;
}