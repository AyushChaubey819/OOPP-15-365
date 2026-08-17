#include <bits/stdc++.h>
using namespace std;

class Demo{
private:
    int value;

public:
    
    Demo(){
        value = 0;
        cout << "Default constructor called." << endl;
    }
    Demo(int v){
        value = v;
        cout << "Parameterized constructor called." << endl;
    }

    Demo(const Demo &obj){
        value = obj.value;
        cout << "Copy constructor called." << endl;
    }

    ~Demo(){
        cout << "Destructor called for value: " << value << endl;
    }

    void display(){
        cout << "Value = " << value << endl;
    }
};

int main(){
    cout << "Creating object using default constructor:\n";
    Demo obj1;
    obj1.display();

    cout << "\nCreating object using parameterized constructor:\n";
    Demo obj2(100);
    obj2.display();

    cout << "\nCreating object using copy constructor:\n";
    Demo obj3(obj2);
    obj3.display();

    cout << "\nEnd of main function.\n";

    return 0;
}