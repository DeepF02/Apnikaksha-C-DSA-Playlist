#include<iostream>
using namespace std;

class A{
    public:
        int a;
        void funcA(){
            cout<<"Function A\n";
        }

    private:
        int b;
        void funcB(){
            cout<<"Function B\n";
        }

    protected:
        int c;
        void funcC(){
            cout<<"Function C\n";
        }
    
};

int main()
{
    A obj;
    obj.funcA();
    //obj.funcB();
    //obj.funcC();
    
    return 0;
}