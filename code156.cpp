#include<bits/stdc++.h>
using namespace std;

long long merge(int arr[], int l, int mid, int r)
{
    long long inv=0;
    //l is starting index of arr and r is ending index of arr
    int n1 = mid -l +1;
    int n2 = r - mid;
    //two temp arrays representing main arr from start to mid & to end
    int a[n1];
    int b[n2];
    for (int i=0; i<n1; i++){
        a[i] = arr[l + i];
    }
    for (int i=0; i<n2; i++){
        b[i] = arr[mid + 1 + i];
    }
    //pointers for temp arrays  i & j, k is to traverse in arr
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        //a[i],a[i+1],....a[]>b[j] and i<j
        else{
            arr[k]=b[j];
            inv += n1 - i;
            k++; j++;
        }
    }
    //if we reach end of b[j]
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    //if we reach end of a[i]
    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
    return inv;
}

long long mergeSort(int arr[], int l, int r)
{
    long long inv = 0;
    if(l<r){
        int mid=(l+r)/2;
        inv += mergeSort(arr, l, mid);//sorting arr till mid
        inv += mergeSort(arr, mid +1, r);//sorting arr after mid
        inv += merge(arr, l, mid, r);//merging a[i] & b[j]
    }
    return inv;
}

int32_t main()
{
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    cout<<mergeSort(arr, 0,n-1); 
    return 0;
}