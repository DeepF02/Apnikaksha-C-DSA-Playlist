#include<iostream>
using namespace std;

int main()
{
   int n, count=1;
   cout<<"Enter no. of rows or columns : ";
   cin>>n;
   
   for (int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
           if(i%2==0 && j%2==0){
               cout<<"1 ";
           }
           else if(i%2!=0 && j%2!=0){
               cout<<"1 ";
           }
           else{
               cout<<"0 ";
           }
       }
       cout<<endl;
   }

   return 0;
}