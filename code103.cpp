#include<iostream>
#include<string> //headerfile to include strings
using namespace std;

int main()
{
    //input and output in strings
    string str;

    //cin>>str;
    //cout<<str;

    string str1(5, 'n');
    //cout<<str1<<endl;

    //string str="Apnikaksha";
    //cout<<str;

    //for input with space we use getline funtion
    getline(cin,str);
    cout<<str<<endl;

    return 0;
}