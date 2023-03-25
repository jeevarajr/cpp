#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v; // declare an empty vector of integers
    
    // push some elements onto the back of the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    // print out the vector using an iterator
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // use the [] operator to access elements by index
    cout << "Element at index 1: " << v[1] << endl;
    
    // use the size() method to get the size of the vector
    cout << "Size of the vector: " << v.size() << endl;
    
    // use the back() method to get the last element of the vector
    cout << "Last element of the vector: " << v.back() << endl;
    
    // use the pop_back() method to remove the last element of the vector
    v.pop_back();
    cout << "Vector after popping last element: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

OUTPUT:
10 20 30 
Element at index 1: 20
Size of the vector: 3
Last element of the vector: 30
Vector after popping last element: 10 20 
