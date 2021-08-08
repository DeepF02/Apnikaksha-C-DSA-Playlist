#include<iostream>
using namespace std;

//Class declaration
//datatype //classname
class student{
    //by default datamembers are private i.e. we can't access them out of class fn
    string name;

    public://now we can access data members in main()
    int age;
    bool gender;

    //Setters fn = to access private member
    void setName(string s){
        name=s;
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
};

int main()
{
    //student a;
    //a.name='Deep';
    //a.age=19;
    //a.gender=1;

    student arr[3];
    for(int i=0; i<3; i++){
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }

    return 0;
}