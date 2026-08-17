#include <bits/stdc++.h>
using namespace std;

class Complex{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    void display(){
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2){
    Complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main(){
    Complex c1(10, 20);
    Complex c2(5, 15);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();
    Complex sum = add(c1, c2);

    cout << "Sum: ";
    sum.display();

    return 0;
}