#include<iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{   //we need to include max value items but that shouln't exceed the limit of knapsack
    if(n == 0 || W == 0)//base condition
    {
        return 0;
    }
    //if wt od nth item is more then Weight of knapsack
    if(wt[n-1] > W){
        return knapsack(value, wt, n-1, W);
    }
    // case 1 we include nth item in our knapsack (n-1), W -wt[n-1]
    // case 2 we don't include  nth item in our knapsack (n-1), W -0
    return max( knapsack(value, wt, n-1, W-wt[n-1]) + value[n-1], knapsack(value, wt, n-1, W));
}

int main()
{
    int wt[]={10,20,30};
    int value[]={100, 50, 150};
    int n, W=50;
    cout<<knapsack(value, wt, 3, W)<<endl;
     
    return 0;
}