#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int num, int key){
    for(int i=0; i<num;i++){
        if(key==arr[i]){
            return i;
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
        cout<<"Enter "<<i<<"th element of array : ";
        cin>>array[i];
    }
    cout<<"Enter element to be searched : ";
    cin>>key;
    cout<<linearsearch(array,n,key)<<endl;
    return 0;
}