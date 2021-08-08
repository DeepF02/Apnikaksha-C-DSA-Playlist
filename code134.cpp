#include<iostream>
using namespace std;

void subseq(string s, string ans)
{
    if(s.length() == 0)//base condition
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros=s.substr(1);//rest of string

    subseq(ros, ans);//rest of the string and empty string
    subseq(ros, ans+ch);//ros & ans + previous substring element
}

int main()
{
    subseq("ABC","");
    cout<<endl;
    
    return 0;
}