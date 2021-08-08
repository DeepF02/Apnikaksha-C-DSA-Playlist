#include<iostream>
using namespace std;

void swap(int a,int b,int temp){
    
    temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int n1,n2;
    cout<<"Enter any 2 no.'s : ";
    cin>>n1>>n2;
    cout<<"before swap n1 ="<<n1<<"\n"<<"before swap n2 ="<<n2<<endl;

    swap(n1,n2);
    cout<<"After swap n1 ="<<n1<<"\n"<<"After swap n2 ="<<n2<<endl;
return 0;
}