#include<iostream>
using namespace std;


class point{
  
    public:
    int x,y;
    
    void input();
    void show() ;
};

inline void point::input(){
    cout<<"Enter X coordinate: ";
    cin>>x;
    
    cout<<"Enter y coordinate: ";
    cin>>y;
    
    cout<<endl;

  }

 inline void point::show(){
    cout<<"X="<<x<<","<<"Y="<<y;
    cout<<endl;
  }
int main(){
    point p1,p2;
    p1.input();
    p2.input();
    p1.show();
    p2.show();


return 0;
}