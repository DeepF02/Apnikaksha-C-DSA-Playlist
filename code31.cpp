#include<iostream>
using namespace std;

int main()
{
   int n, count=1;
   cout<<"Enter no. of rows or columns : ";
   cin>>n;
   
   for (int i=1; i<=n; i++){
       for(int j=1; j<=n+1-i; j++){
           cout<<j<<" ";
           }
       cout<<endl;
   }

   return 0;
}