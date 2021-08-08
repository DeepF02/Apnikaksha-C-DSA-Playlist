#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    //syntax
    //vector<datatype>name(size,value)
    vector<int>v;//we decalred a vector V of type int
    v.push_back(1);// 1 will be added at the end
    v.push_back(2);// 2 will be added after 1
    v.push_back(3);// 3 will be added after 2

    vector<int>v2(3,50);
    
    // inbuilt functions in vectors
    //swap can alos use v.swap(v1)
    swap(v,v2);//swaps element of v2 with v n viseversa
    for(auto element:v){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }
    //sort
    sort(v.begin(), v.end());
    
    //to get sum of array
    int sum=accumulate(v.begin(), v.end(), 0);
    cout<<sum;

    //to get max & min of array
    //max_element() returns iterator to the max element
    int mx=*max_element(v.begin(), v.end());
    //max_element() returns iterator to the max element
    int mn=*min_element(v.begin(), v.end());

    //to convert the vector into prefix sum vector
    partial_sum(v.begin(), v.end(), v.begin());
    for(auto element:v){
        cout<<element<<endl;
    }

    return 0;
}