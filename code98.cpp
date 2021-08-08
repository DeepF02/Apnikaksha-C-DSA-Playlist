#include<iostream>
using namespace std;

int main()
{
    //largest word of sentence
 int n;
 cin>>n;
 cin.ignore();//used to ignore or clear one or more characters from the input buffer.
 char arr[n+1];

 cin.getline(arr, n+1);//It stops when it has read n-1 characters or. when it finds an end-of-line character ('\n').
 cin.ignore();

 int i=0;
 int currLen=0, maxLen=0;
 int  st=0, maxst=0;

 while(i<n){
    if(arr[i]==' '|| arr[i]=='\0'){//when we have space/last char in sentence
        if(currLen>maxLen){
            maxst=st;
            maxLen=currLen;
        }

        st=i+1;
        currLen=0;
    }
    else{
        currLen++;
    }
    if(arr[i]=='\0'){//at the end of sentence
        break;
    }
    i++;
 }
 //cout<<arr<<endl;
 cout<<maxLen<<endl;
 for(int i=0; i<maxLen; i++){
     cout<<arr[maxst+i];
 }
 cout<<endl;
 return 0;
}