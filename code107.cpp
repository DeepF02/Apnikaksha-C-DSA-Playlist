#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s="aJHBazrthz" ;

    //to upper case
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    
    //to lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    
    return 0;
}