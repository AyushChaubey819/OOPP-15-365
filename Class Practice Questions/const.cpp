#include<bits/stdc++.h>
using namespace std ;

int main(){
    int x=10,y=20;
    const int*a ;
    a=&x ;
    cout<<*a<<endl;
    a=&y;
    cout<<*a<<endl;

    y=200;
    cout<<y<<endl;
}