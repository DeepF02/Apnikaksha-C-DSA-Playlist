#include<iostream>
using namespace std;

int friendsPairing(int n)
{   //we have to pair given no. of people as friends
    if(n == 0 || n == 1 || n == 2)//base condition
    {
        return n;
    }
    // case 1 we leave a person unpaired (n-1)
    // case 2 we pair tha person also (n-2)*(n-1)
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}

int main()
{
    cout<<friendsPairing(4);
     
    return 0;
}