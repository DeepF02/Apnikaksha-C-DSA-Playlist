#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int l, int r)
{
    //l is starting index of arr and r is ending index of arr
    int pivot = arr[r];//pivot can be any element of array
    int i= l-1;

    for(int j=l; j<r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);//to swap pivot & smallest element
    return (i + 1);//return index of smallest element
}

void quickSort(int arr[], int l, int r)
{
    if(l < r){

        int pi=partition(arr, l, r);//index of pivot
        quickSort(arr, l, pi - 1);//sorting arr till pivot-1
        quickSort(arr, pi + 1, r);//sorting arr after pi+1

    }
}

int main()
{
    int arr[5]={5,4,3,2,1};
    quickSort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    return 0;
}