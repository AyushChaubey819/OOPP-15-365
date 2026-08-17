#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}
int main(){
    int x = 10, y = 20;
    float p = 5.5f, q = 2.5f;
    double m = 10.25, n = 4.75;

    cout << "Integer addition: " << add(x, y) << endl;
    cout << "Float addition: " << add(p, q) << endl;
    cout << "Double addition: " << add(m, n) << endl;

    return 0;
}
