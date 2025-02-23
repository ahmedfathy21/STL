#include <iostream>
#include <tuple>
#include <string>

int main() {
    // Creating a tuple
    std::tuple<int, std::string, double> myTuple(1, "Hello", 3.14);

    // Accessing elements using std::get
    std::cout << "First element: " << std::get<0>(myTuple) << std::endl;
    std::cout << "Second element: " << std::get<1>(myTuple) << std::endl;
    std::cout << "Third element: " << std::get<2>(myTuple) << std::endl;

    // Modifying elements
    std::get<1>(myTuple) = "World";
    std::cout << "Modified second element: " << std::get<1>(myTuple) << std::endl;

    // Using std::tie to unpack tuple into variables
    int a;
    std::string b;
    double c;
    std::tie(a, b, c) = myTuple;
    std::cout << "Unpacked values: " << a << ", " << b << ", " << c << std::endl;

    // Using std::make_tuple to create a new tuple
    auto newTuple = std::make_tuple(42, "Example", 2.718);
    std::cout << "New tuple: " << std::get<0>(newTuple) << ", " << std::get<1>(newTuple) << ", " << std::get<2>(newTuple) << std::endl;

    return 0;
}