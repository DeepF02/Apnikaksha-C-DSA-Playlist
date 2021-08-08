#include<iostream>
using namespace std;

bool age(int n){
    
    if(n>=18){
        return true;
    }

    return false;
}

int main(){
    int n;
    cout<<"Enter your age : ";
    cin>>n;

    if(age(n)){
        cout<<"Eligible for voting";
    }
    else{
        cout<<"Not eligible for voting";
    }
return 0;
}