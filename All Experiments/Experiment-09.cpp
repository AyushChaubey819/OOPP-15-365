#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    double grade;

public:
    Student() {
        id = 0;
        name = "";
        grade = 0.0;
    }

    void input() {
        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter grade: ";
        cin >> grade;
    }

    void display() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Grade: " << grade << endl;
    }

    int getID() const {
        return id;
    }
};

int main() {
    int size;

    cout << "Enter number of students: ";
    cin >> size;

    // Pointer to a dynamically allocated array of objects
    Student* students = new Student[size];

    // Input data using pointer arithmetic
    cout << "\n--- Enter Student Information ---\n";

    for (int i = 0; i < size; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        (students + i)->input();
    }

    // Display the array of objects
    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < size; i++) {
        (students + i)->display();
    }

    // Search for an object and point to it
    int searchID;
    cout << "\nEnter student ID to search for: ";
    cin >> searchID;

    Student* foundStudent = nullptr;

    for (int i = 0; i < size; i++) {
        if ((students + i)->getID() == searchID) {
            foundStudent = students + i;
            break;
        }
    }

    if (foundStudent != nullptr) {
        cout << "\nStudent found:\n";
        foundStudent->display();
    } else {
        cout << "\nStudent not found.\n";
    }

    delete[] students;
    students = nullptr;

    return 0;
}
