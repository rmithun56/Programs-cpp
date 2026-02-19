#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        int rollNumber;
        string name;
        double marks;
    
    public:
        // Constructor - Initialize objects
        Student(int r = 0, string n = "", double m = 0.0) {
            rollNumber = r;
            name = n;
            marks = m;
            cout << "Constructor called for student: " << name << endl;
        }
        
        // Destructor - Display message when object is deleted
        ~Student() {
            cout << "Destructor called for student: " << name << endl;
        }
        
        // Setter methods
        void setData(int r, string n, double m) {
            rollNumber = r;
            name = n;
            marks = m;
        }
        
        // Getter methods
        int getRollNumber() {
            return rollNumber;
        }
        
        string getName() {
            return name;
        }
        
        double getMarks() {
            return marks;
        }
        
        // Display method
        void displayData() {
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    cout << "=== Creating Stack Objects ===\n";
    
    // Create objects on stack
    Student s1(101, "Alice", 85.5);
    Student s2(102, "Bob", 92.0);
    
    cout << "\n--- Displaying Student Details ---\n";
    cout << "Student 1:\n";
    s1.displayData();
    
    cout << "\nStudent 2:\n";
    s2.displayData();
    
    cout << "\n=== Creating Heap Objects ===\n";
    
    // Create objects on heap
    Student* s3 = new Student(103, "Charlie", 88.5);
    cout << "\nStudent 3:\n";
    s3->displayData();
    
    // Delete heap object (calls destructor)
    cout << "\nDeleting heap object...\n";
    delete s3;
    
    cout << "\n=== End of Main ===\n";
    // Stack objects are automatically destroyed here (destructors called)
    
    return 0;
}
