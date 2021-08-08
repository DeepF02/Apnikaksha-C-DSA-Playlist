#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s="aJHBazrthz" ;

    //to upper case
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        s[i]-=32;//diff in AsCii value of lowercase & uppercase is 32
    }
    cout<<s<<endl;
    
    //to lower case
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;
    }
    cout<<s<<endl;
    
    return 0;
}