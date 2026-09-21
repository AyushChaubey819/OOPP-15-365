#include<iostream>
using namespace std;

int main(){
    int salary = 10;
    int* newsalary ;
    newsalary = &salary;

    *newsalary=salary+salary/10 ;
    cout<<salary<<endl;

return 0;
}