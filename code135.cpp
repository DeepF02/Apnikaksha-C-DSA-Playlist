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
    int code = ch;//tp get AsCii code
    string ros=s.substr(1);//rest of string

    subseq(ros, ans);//rest of the string and empty string
    subseq(ros, ans+ch);//ros & ans + previous substring element
    subseq(ros, ans + to_string(code));//ros & ans + previous substring ASCII code(coverted to string from int)
}

int main()
{
    subseq("AB","");
    cout<<endl;
    
    return 0;
}