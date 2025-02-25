#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map of strings to integers
    std::map<std::string, int> myMap;
std::map<char,int>mp;
mp['a']=10;
mp['b']=11;
mp['c']=12;

// Insert some values into the map
    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["cherry"] = 3;    // Iterate over the map and print the key-value pairs
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element in the map
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        std::cout << "Found banana with value: " << it->second << std::endl;
    } else {
        std::cout << "Banana not found" << std::endl;
    }

    // Erase an element from the map
    myMap.erase("apple");

    // Check if an element exists in the map
    if (myMap.count("apple") > 0) {
        std::cout << "Apple is in the map" << std::endl;
    } else {
        std::cout << "Apple is not in the map" << std::endl;
    }
  std::cout<<mp.count('c')<<std::endl;

    return 0;
}  