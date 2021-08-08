#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int array[n], sum=0;
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i<<"th element of array : ";
        cin>>array[i];
    }
    for(int i=0; i<n; i++){
        sum+=array[i];
    }
    cout<<"Sum of elements of array is "<<sum<<endl;
    return 0;
}