#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    // Example with vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>::iterator vecIt;

    std::cout << "Vector elements: ";
    for (vecIt = vec.begin(); vecIt != vec.end(); ++vecIt) {
        std::cout << *vecIt << " ";
    }
    std::cout << std::endl;

    // Example with list
    std::list<int> lst = {10, 20, 30, 40, 50};
    std::list<int>::iterator lstIt; 

    std::cout << "List elements: ";
    for (lstIt = lst.begin(); lstIt != lst.end(); ++lstIt) {
        std::cout << *lstIt << " ";
    }
    std::cout << std::endl;

    // Using std::find algorithm with iterators
    vecIt = std::find(vec.begin(), vec.end(), 3);
    if (vecIt != vec.end()) {
        std::cout << "Element 3 found in vector at position: " << std::distance(vec.begin(), vecIt) << std::endl;
    } else {
        std::cout << "Element 3 not found in vector" << std::endl;
    }

    lstIt = std::find(lst.begin(), lst.end(), 30);
    if (lstIt != lst.end()) {
        std::cout << "Element 30 found in list" << std::endl;
    } else {
        std::cout << "Element 30 not found in list" << std::endl;
    }

    return 0;
}