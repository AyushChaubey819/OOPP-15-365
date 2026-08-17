#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    int marks;
    static int totalStudents;

public:
    Student(int m){
        marks = m;
        totalStudents++;
    }

    static void showTotalStudents(){
        cout << "Total Students: " << totalStudents << endl;
    }

    friend void showMarks(const Student &s);
};

int Student::totalStudents = 0;

void showMarks(const Student &s){
    cout << "Marks: " << s.marks << endl;
}

int main(){
    Student s1(85);
    Student s2(90);
    Student s3(78);

    showMarks(s1);
    showMarks(s2);
    showMarks(s3);

    Student::showTotalStudents();

    return 0;
}