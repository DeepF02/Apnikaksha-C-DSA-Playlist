#include<iostream>
using namespace std;

bool alphabet(char n){
    
    if((n>='a' && n<='z') || (n>='A' && n<='Z')){
        return true;
    }

    return false;
}

int main(){
    char n;
    cout<<"Enter a character : ";
    cin>>n;

    if(alphabet(n)){
        cout<<"An Alphabet";
    }
    else{
        cout<<"Not an Alphabet";
    }
return 0;
}