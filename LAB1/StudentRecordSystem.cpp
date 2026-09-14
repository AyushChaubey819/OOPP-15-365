#include<iostream>
using namespace std;

class Student{
     string name;
     int roll;
     string branch ;

     
public:
     void input(){
       cout<<"Enter Name: ";
       getline(cin,name);

       cout<<"Enter roll No.: ";
       cin>>roll;

       cout<<"Enter Branch: ";
       cin>>branch;
        
     }
     void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Branch: "<<branch<<endl;
     }

};
int main(){
     
    Student s1;
    s1.input();

    s1.show();

return 0;
}