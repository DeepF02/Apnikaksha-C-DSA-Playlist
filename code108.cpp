#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s="3535854" ;

    sort(s.begin(), s.end(), greater<int>());//sorts string in decreasing order
    cout<<s;
    
    return 0;
}