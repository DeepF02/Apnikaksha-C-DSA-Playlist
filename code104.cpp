#include<iostream>
#include<string> //headerfile to include strings
using namespace std;

int lengthOfInt(int x){
    int z=0;
    while(x){
        x/=10;
        z++;
    }
    return z;
}

int main()
{
    //Different functions in string
    
    //Append
    //string s1="nincompoop";
    //string s2="Fam";
    //s1.append(s2);
    //s1+=s2;
    //cout<<s1<<endl;
    //cout<<s1[1]<<endl;

    //Clear
    //string s="abc efg";
    //s.clear();
    //cout<<s;

    //Compare
    //if(!s1.compare(s2))//s1!=s2
    //cout<<"Strings are not equal";

    //empty
    //s1.clear();
    //if(s1.empty())
    //cout<<"String is empty";

    //Erase
    //s1.erase(3,3);
    //cout<<s1<<endl;

    //Find
    //cout<<s1.find("com")<<endl;

    //Insert
    //s1.insert(2,"lol");
    //cout<<s1<<endl;
    

    //length
    //cout<<s1.size()<<endl;
    //cout<<s1.length()<<endl;
    //for(int i=0; i<s1.length(); i++)
    //cout<<s1[i]<<endl;

    //Substring
    //string s=s1.substr(6,4);
    //cout<<s<<endl;

    //stoi
    string s1="786";
    int x=stoi(s1);
    //cout<<x+2<<endl;
    //cout<<lengthOfInt(x);

    //to_string
    //cout<<to_string(x)+"2";
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k--){
    for(int i=0; i<(n-1); i++){
        int temp=s[0];
        s[i]=s[++i];
        s[n-1]=temp;
    }
    }
    cout<<s<<endl;

    return 0;
}