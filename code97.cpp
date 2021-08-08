#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 char arr[n+1];
 //input
 cin>>arr;
 bool check=1;

 for(int i=0; i<n; i++){
     if(arr[i]!=arr[n-1-i])
     {
        check=0;
        break;
     }
 }
 if (check==1)
 {
    cout<<arr<<" is a palindrome\n";
 }
 else{
    cout<<arr<<" is not a palindrome\n";
 }
 return 0;
}