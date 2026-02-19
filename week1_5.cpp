#include<iostream>
using namespace std;

class Student {
    private:
        int rollno;
        string name;
    public:
        Student() {
            cout << "Student constructor called\n";
        }
        
        ~Student() {
            cout << "Student destructor called\n";
        }
        
        void inputData(int r, string n) {
            rollno = r;
            name = n;
        }
        
        void displayData() {
            cout << "Roll No: " << rollno << ", Name: " << name << endl;
        }
};

int main() {
    cout << "=== Single Object Dynamic Allocation ===\n";
    
    // Allocate single Student object
    Student* student1 = new Student();
    student1->inputData(101, "Alice");
    student1->displayData();
    
    // Release memory for single object
    cout << "Deleting single object...\n";
    delete student1;
    student1 = NULL;  // Set to NULL after deletion
    cout << "Memory released!\n\n";
    
    
    cout << "=== Array of Objects Dynamic Allocation ===\n";
    
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    // Allocate array of Student objects
    Student* students = new Student[n];
    
    // Input data
    cout << "\nEnter student details:\n";
    for (int i = 0; i < n; i++) {
        int rollno;
        string name;
        cout << "Roll No: ";
        cin >> rollno;
        cout << "Name: ";
        cin >> name;
        students[i].inputData(rollno, name);
    }
    
    // Display data
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }
    
    // Release memory for array
    cout << "\nDeleting array of objects...\n";
    delete[] students;  // Use delete[] for arrays
    students = NULL;    // Set to NULL after deletion
    cout << "Memory released!\n";
    
    return 0;
}
