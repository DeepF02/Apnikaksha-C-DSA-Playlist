#include<iostream>
using namespace std;

int max(int a,int b,int c){
    
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    return c;
}
int min(int n1,int n2,int n3){
    
    if(n1<n2 && n1<n3){
        return n1;
    }
    else if(n2<n1 && n2<n3){
        return n2;
    }
    return n3;
}

int main(){
    int n1,n2,n3;
    cout<<"Enter any 3 no.'s : ";
    cin>>n1>>n2>>n3;

    int Maximum=max(n1,n2,n3);
    cout<<"Maximum no. is "<<Maximum<<endl;
    
    int Minimum=min(n1,n2,n3);
    cout<<"Minimum no. is "<<Minimum<<endl;
    
return 0;
}