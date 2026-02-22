#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, i;
    cout << "Enter no of elements: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element: " << i + 1 << endl;
        cin >> x;
        v.push_back(x);
    }
    cout << "Vector elements are:" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " " << endl;
    }
    // sort vector
    sort(v.begin(), v.end());
    cout << "Sorted vector elements are:" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " " << endl;
    }
    return 1;
}