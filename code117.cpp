#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) !=0);
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int unique(int arr[], int n){
    int result=0;
    for(int i=0; i<64; i++)//to check bits of all 64 positions
    {
        int sum=0;
        //to tranverse all the elements of arr and check which elements have set bit at at i th pos 
        for(int j=0; j<n; j++)
        {
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        //only element not divisible to 3 will be unique 
        if(sum%3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10)<<endl;

    return 0;
}