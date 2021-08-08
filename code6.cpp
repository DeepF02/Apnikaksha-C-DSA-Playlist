#include<iostream>
using namespace std;

int main(){
   int side1,side2,side3;
   cout<<"Enter 3 sides of triangle"<<endl;
   cin>>side1>>side2>>side3;
   
   if(side1==side2){
       if(side2==side3){
       cout<<"Equilateral"<<endl;
   }
       else{
       cout<<"Isosceles"<<endl;
   }}
   else{
       if(side2==side3 ||side1==side3){
       cout<<"Isosceles"<<endl;
   }
       else{
       cout<<"Scalene"<<endl;
   }
   }

   
    return 0;
}