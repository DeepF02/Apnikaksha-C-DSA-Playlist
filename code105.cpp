#include<iostream>
#include<algorithm>//headerfile for sort function
#include<string> //headerfile to include strings
using namespace std;

int main()
{
   string s1="aghazrthz" ;
   sort(s1.begin(),s1.end());
   cout<<s1<<endl;
   
   return 0;
}