#include<iostream>
using namespace std;

class Time{
    int hh,mm,ss;
    public:
    Time(int hh,int mm,int ss): hh{hh},mm{mm},ss{ss}{}
    void show(){
        cout<<hh<<":"<<mm<<":"<<ss;
        cout<<endl;
    }
};
int main(){
   
    Time T1(9,45,14);
    T1.show();
return 0;
}