#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    // Initializing a vector
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << "Initial vector: ";
    print_vector(v1);

    // Adding elements to the vector
    v1.push_back(6);
    v1.push_back(7);
    cout << "After push_back: ";
    print_vector(v1);

    // Removing the last element
    v1.pop_back();
    cout << "After pop_back: ";
    print_vector(v1);

    // Inserting an element at a specific position
    v1.insert(v1.begin() + 2, 10);
    cout << "After insert: ";
    print_vector(v1);

    // Removing an element at a specific position
    v1.erase(v1.begin() + 2);
    cout << "After erase: ";
    print_vector(v1);

    // Accessing elements
    cout << "Element at index 2: " << v1[2] << endl;

    // Clearing the vector
    v1.clear();
    cout << "After clear, size: " << v1.size() << endl;

    // Resizing the vector
    v1.resize(5, 100);
    cout << "After resize: ";
    print_vector(v1);

    // Swapping two vectors
    vector<int> v2 = {10, 20, 30};
    cout << "Vector v2 before swap: ";
    print_vector(v2);
    v1.swap(v2);
    cout << "Vector v1 after swap: ";
    print_vector(v1);
    cout << "Vector v2 after swap: ";
    print_vector(v2);

    return 0;
}