#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        int rollNumber;
        string name;
        double marks;
    
    public:
        // Constructor
        Student() : rollNumber(0), name(""), marks(0.0) {}
        
        Student(int r, string n, double m) : rollNumber(r), name(n), marks(m) {}
        
        // Setter methods
        void setData(int r, string n, double m) {
            rollNumber = r;
            name = n;
            marks = m;
        }
        
        void setRollNumber(int r) {
            rollNumber = r;
        }
        
        void setName(string n) {
            name = n;
        }
        
        void setMarks(double m) {
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
    // Create Student objects
    Student s1(101, "Alice", 85.5);
    Student s2(102, "Bob", 92.0);
    
    cout << "--- Student 1 ---\n";
    s1.displayData();
    
    cout << "\n--- Student 2 ---\n";
    s2.displayData();
    
    // Modify using setter methods
    cout << "\n--- After updating Student 1 ---\n";
    s1.setMarks(90.0);
    s1.displayData();
    
    return 0;
}
