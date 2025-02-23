#include <iostream>
#include <string>
using namespace std;
int main() {
    // Creating and initializing strings
     string str1 = "Hello";
     string str2 = "World";
    
    // Concatenating strings
     string str3 = str1 + " " + str2;
     cout << "Concatenated string: " << str3 <<  endl;
    
    // Getting the length of a string
     cout << "Length of str3: " << str3.length() <<  endl;
    
    // Accessing characters in a string
     cout << "First character of str3: " << str3[0] <<  endl;
    
    // Modifying characters in a string
    str3[0] = 'h';
     cout << "Modified string: " << str3 <<  endl;
    
    // Substring
     string str4 = str3.substr(0, 5);
     cout << "Substring of str3: " << str4 <<  endl;
    
    // Finding a substring
    size_t pos = str3.find("World");
    if (pos !=  string::npos) {
         cout << "'World' found at position: " << pos <<  endl;
    } else {
         cout << "'World' not found" <<  endl;
    }
    
    // Comparing strings
    if (str1 == str2) {
         cout << "str1 and str2 are equal" <<  endl;
    } else {
         cout << "str1 and str2 are not equal" <<  endl;
    }
    
    return 0;
}