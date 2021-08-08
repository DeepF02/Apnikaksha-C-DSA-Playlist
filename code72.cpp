#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key){//for binaryseaarch elemts of arr should to be in sorted order
    
    int s=0, e=n-1;//starting & ending elements of array
    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1; 
}

int32_t main(){
    int n, key;
    cout<<"Enter size of array : ";
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        //cout<<"Enter "<<i<<"th element of array : ";
        cin>>array[i];
    }
    cout<<"Enter element to be searched : ";
    cin>>key;
    cout<<binarysearch(array,n,key)<<endl;
    return 0;
}