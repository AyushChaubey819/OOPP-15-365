#include <bits/stdc++.h>
using namespace std;

class Student {
private: 
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {
        cout << "Student object created."<<endl;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Student object destroyed."<<endl;
    }
};

int main() {

    unique_ptr<Student> student1 = make_unique<Student>("Rahul", 85);

    cout << "\nUsing unique_ptr:"<<endl;
    student1->display();

    unique_ptr<Student> student2 = move(student1);

    cout << "\nAfter transferring ownership: "<<endl;
    student2->display();

    shared_ptr<Student> student3 =
        make_shared<Student>("Priya", 92);

    shared_ptr<Student> student4 = student3;

    cout <<"\nUsing shared_ptr:"<<endl;
    student3->display();

    cout << "Number of shared owners: " <<student3.use_count()<<endl;

    return 0;
}
