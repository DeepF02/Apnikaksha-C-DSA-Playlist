#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s="qevfvavqqbgnuokiubfba";

    //max frequency char

    int freq[26];
    for(int i=0; i<s.size(); i++)
       freq[i]=0;
    
    for(int i=0; i<s.size(); i++){
       freq[s[i]-'a']++;
    }
    char ans='a';
    int maxF=-1;
    for(int i=0; i<s.size(); i++){
        if(maxF<freq[i]){
            maxF=freq[i];
            ans='a'+i;
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}