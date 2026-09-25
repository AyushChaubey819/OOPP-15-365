#include<iostream>
using namespace std;

inline double area(double length,double width=0){
    return length*width ;
}
inline double area(float radius){
    return 3.14000*radius*radius  ;
}

inline int  area(int size=0){
    return size*size;
}



int main(){

    double l,b;
    cout<<"Enter the length: ";
    cin>>l;

    cout<<"Enter the width: ";
    cin>>b ;

    double radius ;
    int size ;
    cout<<"Enter the radius : ";
    cin>>radius;

    cout<<"Enter the size: ";
    cin>>size; 


    cout<<"Area of rectangle : "<<area(l,b)<<endl;
    cout<<"Area of Circle : "<< area(radius)<<endl;
    cout<<"Area of Square : "<< area(size)<<endl;
    

}