#include <iostream>
#include <stack>
using namespace std;
int main() {
     stack<int> s;

    // push() - Add elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // top() - Access the top element
     cout << "Top element: " << s.top() <<  endl;

    // pop() - Remove the top element
    s.pop();
     cout << "Top element after pop: " << s.top() <<  endl;

    // size() - Get the number of elements in the stack
     cout << "Stack size: " << s.size() <<  endl;

    // empty() - Check if the stack is empty
     cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") <<  endl;

    // emplace() - Construct and insert element at the top
    s.emplace(40);
     cout << "Top element after emplace: " << s.top() <<  endl;

    // swap() - Swap contents with another stack
     stack<int> s2;
    s2.push(100);
    s2.push(200);
    s.swap(s2);
     cout << "Top element after swap: " << s.top() <<  endl;

    return 0;
}