#include <bits/stdc++.h>
using namespace std;

inline int square(int x){
    return x * x;
}

int add(int a = 0, int b = 0){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}

float multiply(float a, float b){
    return a * b;
}

int main(){
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\nSquare of " << a << " = " << square(a) << endl;

    cout << "Addition of two numbers = " << add(a, b) << endl;
    cout << "Addition using one argument = " << add(a) << endl;
    cout << "Addition using default arguments = " << add() << endl;

    cout << "Integer Multiplication = " << multiply(a, b) << endl;
    cout << "Float Multiplication = " << multiply(2.5f, 4.0f) << endl;

    return 0;
}