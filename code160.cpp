#include<iostream>
using namespace std;

class Apnacollege{
    public:
        void fun()
        {
            cout<<"I am function with no argument\n";
        }
        void fun(int x)
        {
            cout<<"I am function with int argument\n";
        }
        void fun(double x)
        {
            cout<<"I am function with double argument\n";
        }
};

int main()
{
    Apnacollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    
    return 0;
}