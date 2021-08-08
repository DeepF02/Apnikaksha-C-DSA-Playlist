//All c++ functions library
#include <bits/stdc++.h>
using namespace std;

//To covert binary to decimal 
int binaryToDecimal(int n)
{
    int ans=0, x=1; 
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n=n/10;
    }
    return ans;
}
//To covert decimal to binary
int decimalToBinary(int n)
{
    int x=1, ans=0;
    //to get max power of 2
    while (x<n){
        x*=2;
    }
    while (x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;//to get reaminder of n/x after 1st division
        ans=ans*10 + lastdigit;//appending 0/1 at last of our ans
        x/=2;//decrement x by pwer of 2
    }  
    return ans; 
}
//cyclic shift left
string cyclicShift(string s,int n)
{
    char temp;
    for(int i=0; i<(n-1); i++){
        temp=s[i];
        s[i]=s[++i];
        s[++i]=temp;
    }
    return s;
}
//To get length of a int (if possible convert int to string and use lentgh() func.)
int lengthOfInt(int x){
    int z=0;
    while(x){
        x/=10;
        z++;
    }
    return z;
}
//Input for matrix
int matrixInput(int arr[][], int n, int m)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    return arr[n][m];
}
/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
/* Utility function to input an array */
void inputArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cin >> arr[i];
}
vector<int> stringToVector(string s){
    vector<int > v;
    vector<int> v1;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '0'){
            v.push_back(0);
            
        }else{
            v.push_back(1);
            
        }
    }
    return v;
}