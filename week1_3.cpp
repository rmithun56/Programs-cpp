#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        string branch;
    public:
        Student() : name(""), age(0), branch("") {}
        Student(string n, int a, string b) : name(n), age(a), branch(b) {}
        
        void setData(string n, int a, string b) {
            name = n;
            age = a;
            branch = b;
        }

        void displayData() {
            cout << "Name: " << name << ", Age: " << age << ", Branch: " << branch << endl;
        }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    // Dynamically allocate an array of Student objects
    Student* students = new Student[n];
    
    // Input data for students
    cout << "\nEnter student details:\n";
    for (int i = 0; i < n; i++) {
        string name, branch;
        int age;
        
        cout << "\nStudent " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Branch: ";
        cin >> branch;
        
        students[i].setData(name, age, branch);
    }
    
    // Display all students
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }
    
    // Deallocate the memory
    delete[] students;
    
    return 0;
}
