#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)//base condition
    {
        return 1;
    }
    
    //int prevfact=factorial(n-1);
    
    return n*factorial(n-1);//alternative to reduce code even further
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}