#include<iostream>
using namespace std;

//Class declaration
class student{
    //by default datamembers are private i.e. we can't access them out of class fn
    string name;

    public://now we can access data members in main()
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }//default construction

    student(string s, int a, int g){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }// parameterised constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;;
        age = a.age;
        gender = a.gender;
    }
    //Destructor
    ~student(){
        cout<<"Destructor called"<<endl;
    }

    //Setters fn = to access private memeber
    void setName(string s){
        name=s;
    }
    //Getters are public functions used to get private data members in the class.
    void getName(){
        cout<<name<<endl;
    }

    //function in class
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    //operator overloading
    bool operator == (student &a){
        if(name == a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main()
{
    student a("Deep", 19, 1);
    //a.printInfo();

    student b("doge", 1, 1);
    student c = a;

    if(c==a){//operator overloading call
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

    return 0;
}