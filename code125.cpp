#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0 || n == 1)//base condition
    {
        return n;
    }
    //if(n == 1)//base condition
      //  return 1;
    
    //int prevfib1=fibonacci(n-1);
    //int prevfib=2fibonacci(n-2);
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;

    return 0;
}