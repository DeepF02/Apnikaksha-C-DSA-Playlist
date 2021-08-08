#include<iostream>
using namespace std;

string moveallX(string s)
{
    if(s.length() == 0)//base condition
    {
        return "";
    }

    char ch=s[0];
    string ans=moveallX(s.substr(1));

    if(ch == 'x'){
        return ans+ch;//to move x at the end of the string
    }
    return ch+ans;
}

int main()
{
    string s="axxbxcxxdfxxexx";
    
    cout<<moveallX(s);

    return 0;
}