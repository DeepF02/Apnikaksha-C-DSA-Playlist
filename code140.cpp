#include<iostream>
using namespace std;

int tilingWays(int n)
{
    if(n == 0)//base condition
    {
        return 0;
    }
    if(n == 1)//base condition
    {
        return 1;
    }
    //     vertical wayd  + horizontal ways
    return tilingWays(n-1) + tilingWays(n-2);
}

int main()
{
    cout<<tilingWays(4);
     
    return 0;
}