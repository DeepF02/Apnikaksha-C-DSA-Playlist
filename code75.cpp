#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)//as last element doesn't need to be swaped
    {
            int current=arr[i];
            int j=i-1;
            while(arr[j]>current && j>=0){
                arr[j+1]=arr[j];//2nd element gets vallue 
                j--;
            }
            arr[j+1]=current;
    }

    cout<<"Sorted array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}