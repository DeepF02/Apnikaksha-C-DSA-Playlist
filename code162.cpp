#include<iostream>
using namespace std;

//Run Time
//Function Overwriting
//virtual functions
class base
{
    public:
        virtual void print(){
            cout<<"This is the base class's print function\n";
        }
        void display(){
            cout<<"This is the base class's display function\n";
        }
};

class derived : public base
{
    public:
        void print(){
            cout<<"This is the derived class's print function\n";
        }
        void display(){
            cout<<"This is the derived class's display function\n";
        }
};
int main()
{
    base *baseptr;
    derived d;
    baseptr=&d;

    baseptr ->print();
    baseptr ->display();
    return 0;
}