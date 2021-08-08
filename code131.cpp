#include<iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char helper)
{
    if(n == 0)//base condition
    {
        return;
    }
    //to move n-1 block from source to helper
    towerofHanoi(n-1, src, helper, dest);//destr acts as helper 
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    //to move n-1 block from helper to dest
    towerofHanoi(n-1, helper, dest, src);//src acts as helper
}

int main()
{
    towerofHanoi(3, 'A', 'B', 'C');

    return 0;
}