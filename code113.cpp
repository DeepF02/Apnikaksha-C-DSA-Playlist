#include<iostream>
using namespace std;

int numberofones(int n){
    int count=0;
    while(n)//n!=0
    {
        n=n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    cout<<numberofones(7)<<endl;

    return 0;
}