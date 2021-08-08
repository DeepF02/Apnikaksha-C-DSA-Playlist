#include<iostream>
using namespace std;

int main()
{
 char arr[100]="apple";
 int i=0;
 while(arr[i]!='\0')//till i isn't equal to last i.e null charcter
 {
    cout<<arr[i];//<<endl;
    i++;
 }
 cout<<endl;
 
 int n;
 cin>>n;
 char a[n+1];
 //input
 //for(int i=0; i<n; i++){
 cin>>a;
 
 //for(int i=0; i<n; i++){
 cout<<a;
 
 return 0;
}