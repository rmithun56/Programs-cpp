#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        int rollno;
        string name;
        int age;
        string branch;
    public:
        Student() : rollno(0), name(""), age(0), branch("") {}
        
        void inputData() {
            cout << "Roll Number: ";
            cin >> rollno;
            cout << "Name: ";
            cin >> name;
            cout << "Age: ";
            cin >> age;
            cout << "Branch: ";
            cin >> branch;
            cout << endl;
        }
        
        void displayData() {
            cout << "Roll No: " << rollno << " | Name: " << name 
                 << " | Age: " << age << " | Branch: " << branch << endl;
        }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cout << endl;
    
    // Dynamically allocate array of Student objects
    Student* students = new Student[n];
    
    // Input details of all students
    cout << "--- Enter Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ":\n";
        students[i].inputData();
    }
    
    // Display all students
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }
    
    // Deallocate memory
    delete[] students;
    
    return 0;
}
