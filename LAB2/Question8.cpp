#include<iostream>
using namespace std;
//call by value-> so Actual parameters values does not change
void swappByvalue(int a,int b){
     int temp = a;
     a=b;
     b=temp;
}

void swappByReference(int &a,int &b){
    int temp = a;
     a=b;
     b=temp;

     
}

void swappByAddress(int *a,int *b){
    int temp = *a;
     *a= *b;
     *b = temp;
}
int main(){
     
     int a=10,b=5;
     cout<<"Swap by value :- "<<endl;
     swappByvalue(a,b);
     cout<<"a="<<a<<" , "<<"b="<<b;
     cout<<endl;
     
     cout<<"Swap by Reference :- "<<endl;
     swappByReference(a,b);
     cout<<"a="<<a<<" , "<<"b="<<b;
     cout<<endl;
     
     cout<<"Swap by Address :- "<<endl;
     swappByAddress(&a,&b);
     cout<<"a="<<a<<" , "<<"b="<<b;
     cout<<endl;

return 0;
}