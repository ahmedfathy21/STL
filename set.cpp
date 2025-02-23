#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate elements are not added

    // Display the elements of the set
    std::cout << "Elements in the set: ";
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Find an element in the set
    auto it = mySet.find(20);
    if (it != mySet.end()) {
        std::cout << "Element 20 found in the set." << std::endl;
    } else {
        std::cout << "Element 20 not found in the set." << std::endl;
    }

    // Erase an element from the set
    mySet.erase(20);
    std::cout << "Elements in the set after erasing 20: ";
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if the set is empty
    if (mySet.empty()) {
        std::cout << "The set is empty." << std::endl;
    } else {
        std::cout << "The set is not empty." << std::endl;
    }

    // Get the size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;

    return 0;
}