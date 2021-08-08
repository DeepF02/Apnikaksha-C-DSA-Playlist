#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i<<"th element of array : ";
        cin>>array[i];
    }

    int maxNo=INT_MIN, minNo=INT_MAX;//allocates maximum/minimum integer possible
    for(int i=0; i<n; i++){
        maxNo=max(maxNo, array[i]);
        minNo=min(minNo, array[i]);
    }
    cout<<"Maximum element is "<<maxNo<<endl;
    cout<<"Miniimum element is "<<minNo<<endl;
}