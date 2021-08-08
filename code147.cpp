#include<iostream>
using namespace std;

//fn to check if we can place the queen or not.
bool isSafe(int** arr, int x, int y, int n)
{
    //to check in each row///
    for(int row=0; row<x; row++)
    {
        if(arr[row][y]==1){//queen already placed
            return false;
        }
    }
    int row=x; int col=y;
    //to check in left upper diagonal
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x; col=y;
    //to check in right upper diagonal
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** arr, int x, int n)
{
    // base condition (when we reach at end of the board)
    if(x >= n)
    {
        return true;
    }

    for(int col=0; col<n; col++){
        if(isSafe(arr, x, col, n)){//if issafe conditn satisfies 
            arr[x][col]=1; //we place our queen

            if(nQueen(arr, x+1, n)){//we recurse our fn and move downward the board
                return true;
            }
            //if none conditn is satisfied 
            arr[x][col]=0; // this is called backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    //Dynamic memory allocation
    int** arr=new int*[n];//we have declared a array of size n in dynamic memory
    for(int i=0; i<n; i++){
        arr[i]=new int [n];//for allocating dynamic mem to elements of arr
        for(int j=0; j<n; j++){
            arr[i][j] = 0;//we initialize our 2D matrice with 0
        }
    }
    //call-out our function 
    if(nQueen(arr, 0, n))
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}