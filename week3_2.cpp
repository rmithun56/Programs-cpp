#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> l;
    l.push_back("C++");
    l.push_back("Java");
    l.push_back("Python");
    cout << "Initial list elements are: " << endl;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    l.push_front("JavaScript");
    l.pop_back();
    cout << "\nList elements after modification are: " << endl;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}