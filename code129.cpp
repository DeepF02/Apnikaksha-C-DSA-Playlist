#include<iostream>
using namespace std;

void reverse(string s)
{
    if(s.length() == 0)//base condition
    {
        return;
    }

    string ros=s.substr(1);//stores string s from index 1 in ros
    reverse (ros);
    cout<<s[0];
}

int main()
{
    string s="binod";
    
    reverse(s);

    return 0;
}