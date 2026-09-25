#include<iostream>
using namespace std;

class Time{
    public:
    int hh,mm,ss;
   
    void input(int hh,int mm,int ss);
    void show() ;
};
void Time::input(int hh=0,int mm=0,int ss=0){
    this->hh = hh ;
    this->mm = mm ;
    this->ss = ss ;
    
   }

void Time::show(){
        cout<<hh<<":"<<mm<<":"<<ss;
        cout<<endl;
    }
int main(){
   
    Time T1 ;
    T1.input(3,5,0) ;
    T1.show();
return 0;
}