#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[n+1]={0};
    for(int i=2; i<=n; i++){
        if(prime[i]==0)//unmarked
        {
            for(int j=i*i; j<=n; j+=i){//j+=i is finding multiples
                prime[j]=1;//marked
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i] == 0){
            cout<<i<<" ";
        }
       // cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    primeSieve(n);

    return 0;
}