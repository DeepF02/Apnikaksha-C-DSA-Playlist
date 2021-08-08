#include<iostream>
using namespace std;

int main()
{
   int n, count=1;
   cout<<"Enter no. of rows or columns : ";
   cin>>n;
   
   for (int i=1; i<=n; i++){
       for(int j=n-i; j>=1; j--){
           cout<<"  ";
       }
       for(int k=1; k<=n; k++){
           if(k==1 || k==n || i==1 || i==n){
               cout<<"* ";
           }
           else{
               cout<<"  ";
           }
       }
       cout<<endl;
   }

   return 0;
}