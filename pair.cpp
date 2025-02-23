#include <iostream>
#include <utility> // for  pair
using namespace std;


int main() {
    // Creating a pair
     pair<int,  string> myPair(23, "Kakashi");

    // Accessing elements of the pair
     cout << "First element: " << myPair.first <<  endl;
     cout << "Second element: " << myPair.second <<  endl;

    // Modifying elements of the pair
    myPair.first = 2;
    myPair.second = "Hatake";

     cout << "Modified first element: " << myPair.first <<  endl;
     cout << "Modified second element: " << myPair.second <<  endl;

    // Creating a pair using make_pair
    auto anotherPair =  make_pair(3, "Naruto");

     cout << "Another pair - First element: " << anotherPair.first <<  endl;
     cout << "Another pair - Second element: " << anotherPair.second <<  endl;
    // Creating a pair of different types
    pair<double, char> myPair2(3.14, 'A');

    // Accessing elements of the pair
    cout << "First element of myPair2: " << myPair2.first << endl;
    cout << "Second element of myPair2: " << myPair2.second << endl;

    // Modifying elements of the pair
    myPair2.first = 2.71;
    myPair2.second = 'B';

    cout << "Modified first element of myPair2: " << myPair2.first << endl;
    cout << "Modified second element of myPair2: " << myPair2.second << endl;

    // Creating a nested pair
    pair<int, pair<string, double>> nestedPair(1, make_pair("Nested", 4.56));

    // Accessing elements of the nested pair
    cout << "First element of nestedPair: " << nestedPair.first << endl;
    cout << "Second element of nestedPair (first part): " << nestedPair.second.first << endl;
    cout << "Second element of nestedPair (second part): " << nestedPair.second.second << endl;
    return 0;
}