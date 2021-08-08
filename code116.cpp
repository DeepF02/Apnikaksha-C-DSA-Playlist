#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) !=0);
}

void unique(int arr[], int n){
    int xorsum=0;
    //get xor of all elements we'll get xor of 2 unique no. which we'll store in temp 
    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int temp=xorsum;
    //we'll check if last bit of xorsum is 1 or not
    //if !=0 we'll check at what possition we have setbit in xorsum
    int setbit=0;
    int pos=0;
    while(setbit != 1)
    {
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1; //to get next bit at last pos
    }
    //now we need to get xor of xorsum and all elements having same setbit at that pos
    int newxor=0;
    for(int i=0; i<n; i++)
    {
        if(getBit(arr[i],pos-1))//as we have pos++ at last iteration
        {
            newxor=newxor^arr[i];
        }
    }
    cout<<(newxor ^ temp)<<endl;
    cout<<newxor<<endl;
    
}

int main()
{
    int arr[]={1,2,3,5,7,1,2,3};
    unique(arr,8);

    return 0;
}