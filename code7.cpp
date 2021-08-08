#include<iostream>
using namespace std;

int main(){
   char c;
   int isLowercaseVowel, isUppercaseVowel;
   cout<<"Enter any alphabet"<<endl;
   cin>>c;
   
   isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   if(isLowercaseVowel || isUppercaseVowel){
        cout<<c<<" is Vowel"<<endl;
   }
   else{
       cout<<c<<" is consonent"<<endl;
   }
 return 0;
}