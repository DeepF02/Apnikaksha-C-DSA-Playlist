#include<bits/stdc++.h>
using namespace std;

bool check(int a,int b,int c){
    int x=max(a,max(b,c));
    int y, z;
    if(x==a){
        y=b; z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=b;
        z=a;
    }

    if(x*x == y*y + z*z){
        return true;
    }
    else
         return false;
    
}
int32_t main(){
    int a,b,c;
    cout<<"Enter any 3 no.'s : ";
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"Pythagorius triplets";
    }
    else{
        cout<<"Not a Pythagorius triplets";
    }
}