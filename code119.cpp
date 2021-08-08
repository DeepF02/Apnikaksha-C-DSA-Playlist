#include<iostream>
using namespace std;

void primefactor(int n)
{
    int spf[n+1]={0};
    for(int i=2; i<=n; i++){
        spf[i]=i;//smallest prime factor
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==0)//unmarked
        {
            for(int j=i*i; j<=n; j+=i){//j+=i is finding multiples
                if(spf[j]==j)
                spf[j]=i;//marked
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n\=spd[n];
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    primefactor(n);

    return 0;
}