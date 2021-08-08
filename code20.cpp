#include<iostream>
using namespace std;

int main()
{
   char c;
   cout<<"Enter an alphabet : ";
   cin>>c;


   switch (c)
   {
    case 'a':
       cout<<"It's a vowel"<<endl;
       break;
    case 'e':
       cout<<"It's a vowel"<<endl;
       break;
    case 'i':
       cout<<"It's a vowel"<<endl;
       break;
    case 'o':
       cout<<"It's a vowel"<<endl;
       break;
    case 'u':
       cout<<"It's a vowel"<<endl;
       break;

    default:
    cout<<"It's a consonant"<<endl;
        break;
    }

    return 0;
}