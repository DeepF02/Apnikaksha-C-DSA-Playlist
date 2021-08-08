#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
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
        else{
            arr[k]=b[j];
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
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);//sorting arr till mid
        mergeSort(arr, mid +1, r);//sorting arr after mid
        merge(arr, l, mid, r);//merging a[i] & b[j]
    }
}

int main()
{
    int arr[]={5,4,3,2,1};
    mergeSort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    return 0;
}