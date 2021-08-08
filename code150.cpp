#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //syntax
    //vector<datatype>name(size,value)
    vector<int>v;//we decalred a vector V of type int
    v.push_back(1);// 1 will be added at the end
    v.push_back(2);// 2 will be added after 1
    v.push_back(3);// 3 will be added after 2

    //iterators & for loop
    //type 1
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    //type 2
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }
    //type 3
    for(auto element:v){//auto automaticaly decides datatype as per initializatn
        cout<<element<<endl;
    }
    v.pop_back();//element at the end is poped(deleted)
    for(auto element:v){
        cout<<element<<endl;
    }
    vector<int>v2(3,50);
    for(auto element:v2){
        cout<<element<<endl;
    }

    return 0;
}