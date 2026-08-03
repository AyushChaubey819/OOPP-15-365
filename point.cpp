/*Create a point class with two private parameters and show them with constructor*/
#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x;
    int y;
    public:

    
    Point(int p,int q): x{p},y{q}{
        cout<<"Parameterized constructor "<<endl;
    }


    void show(){
        cout<<x<<" , "<<y<<endl;
        
    }
    void input(int p, int q){
        x=p;
        y=q;
    }

    // Point add (Point q){
    //     Point r;
    //     r.x=x+q.x;
    //     r.y=y+q.y;
    //     return r;
    // }
    Point add (Point q){                                  
        return Point(x + q.x , y + q.y);                  //nameless object creation
    }


};

int main(){
    Point p,q(20,50);
    Point r=q;
    r.show();
    q.show();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std ;

// class point {
//     private :
//     int x ,y;
  
//     public:
// //    point(){
// //     x= y = 0;
// //    }
// //another method-> 
//        //least  initalisation
//         point() : x{0} , y{0}  {
//             cout<<"Default Constructor"<<endl ;
//         } 



// // another lazy intialisation
// // point(int p,intq){
// //     x = p;
// //     y= q;
// // }
// point(int p,int q) : x{p} , y{q} {
//     cout<<"Paramterised Constructor"<<endl ;
// }
// void show(){
//     cout<<x<<","<<y<<endl ;
// }

   
// };

// int main(){

//     point p(5,10),q(20,50) ;
//     p.show();
//     q.show();
//     point r = p.add(q) ;
//     r.show() ;

//     return 0 ;
// }