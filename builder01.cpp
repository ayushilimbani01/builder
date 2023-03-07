#include<iostream>
#include<string.h>
using namespace std;
 
 class Employee
 {
     public:
         int id;
         char name[100];
         int salary;
         char address[100];
         char email[100];
         int cont;
         char experience[100];
         
     

 void setData()
 {
 	 
 	  
     cout<<"Enter the employee id: "<<endl;
     cin>>id;
     cout<<"Enter the employee name: "<<endl;
     cin>>name;
     cout<<"Enter the employee salry: "<<endl;
     cin>>salary;
     cout<<"Enter the employee address: "<<endl;
     cin>>address;
     cout<<"Enter the employee email: "<<endl;
     cin>>email;
     cout<<"Enter the employee contact: "<<endl;
     cin>>cont;
     cout<<"Enter the employee experience: "<<endl;
     cin>>experience;
     
 }
 void getData()
 {
     cout<<" id= "<<id<<" name= "<<name<<" salary= "<<salary<<" address= "<<address<<" email= "<<email<<" cont= "<<cont<<" experience= "<<experience<<endl;
 }
 
 };
 
 
 int main()
 {
     Employee e1;
     e1.setData();
     e1.getData();
     
}
