#include<iostream>
using namespace std;

void inc(int n)
{
    if(n == 1)//base condition
    {
        cout<<"1 ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
    return;
}
void dec(int n)
{
    if(n == 1)//base condition
    {
        cout<<"1 ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
    return;
}

int main()
{
    int n;
    cin>>n;
    inc(n);
    dec(n);

    return 0;
}