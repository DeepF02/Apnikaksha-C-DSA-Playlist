#include<iostream>
using namespace std;

bool oddeven(int n){
    
    if(n%2==0){
        return true;
    }

    return false;
}

int main(){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    if(oddeven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }


return 0;
}