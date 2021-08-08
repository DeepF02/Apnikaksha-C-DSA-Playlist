#include<iostream>
using namespace std;

//fn to check if we can go through the path
bool isSafe(int** arr, int x, int y, int n)
{
    if(x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int** arr, int x, int y, int n, int** solArr)
{
    // base condition (when we reach at end of the maze)
    if((x == (n-1)) && (y == (n-1)))
    {
        solArr[x][y] = 1;
        return true;
    }

    if(isSafe(arr, x, y, n)){
        //initialize solarr with 1
        solArr[x][y]=1;
        //to move in rightward direction
        if(ratinMaze(arr, x + 1, y, n, solArr)) {
            return true;
        }
        // to move in downward direction
        if(ratinMaze(arr, x, y+1, n, solArr)) {
            return true;
        }
        //if both condition are false
        solArr[x][y]=0;//this is called backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    //Dynamic memory allocation
    int** arr=new int*[n];//we have declared a array of size n in dynamic memory
    for(int i=0; i<n; i++)
        arr[i]=new int [n];//for allocating dynamic mem to elements of arr

    //taking our 2D matrice as input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //alocating mem to solarr
    int** solArr = new int* [n];
    for(int i=0; i<n; i++){
        solArr[i]=new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j] = 0;//initialising solarr as 0
        }
    }
    //call-out our function 
    if(ratinMaze(arr, 0, 0, n, solArr))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
//1 0 1 0 1
//1 1 1 1 1
//0 1 0 1 0
//1 0 0 1 1
//1 1 1 0 1