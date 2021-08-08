#include<iostream>
using namespace std;

int main()
{
   int n, j;
   cout<<"Enter no. of rows or columns : ";
   cin>>n;
   
   for (int i=1; i<=n; i++){
       for(int j=1; j<=n-i; j++){
           cout<<"  ";
       }
       int k=i;
       for(j=1; j<=i; j++){
           cout<<k--<<" ";
       }
       k=2;
       for(j=1; j<=i-1; j++){
           cout<<k++<<" ";
       }
       cout<<endl;
   }

   return 0;
}