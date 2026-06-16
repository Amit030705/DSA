#include <iostream>
using namespace std;

/*
====================================================
Class: Student
Purpose: Store and display student information.
====================================================
*/
class Student {
public:
    // Attributes
    string name;
    int age;

    // Member function to display student details
    void display() {
        cout << "My name is " << name << endl;
        cout << "My age is " << age << endl;
    }
};

int main() {

    // Creating an object of Student class
    Student s1;

    // Assigning values to object attributes
    s1.name = "Amit";
    s1.age = 21;

    // Displaying student information
    s1.display();

    return 0;
}