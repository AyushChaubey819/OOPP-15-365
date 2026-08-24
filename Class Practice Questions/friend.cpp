#include<bits/stdc++.h>
using namespace std ;

class A{
    private: int x;
    protected: int y;
    public : int z ;

    friend void show(A);



void show(A obj){
    obj.x  = 100;
    obj.y = 200;
    obj.z = 300 ;

    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    cout<<obj.z<<endl;


}
};

int main(){
   A obj ;
    show(obj);


}