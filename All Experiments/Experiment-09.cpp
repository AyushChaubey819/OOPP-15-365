#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void show() const {
       cout<<"Name : "<<name<<endl;
       cout<<"Makrs : "<<marks<<endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];
    Student* ptr = students;
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter details of Student " << i + 1 << ":\n";
        ptr[i].input();
    }
 
    cout << "\nStudent Records:\n";
    cout << "Roll No\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        (ptr + i)->show();
    }

    delete[] students;
    return 0;
}
