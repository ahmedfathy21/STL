#include <iostream>
#include <map>
#include <stack>
using namespace std;

bool isValid(string str) {
    map<char, char> mp;
    mp[')'] = '(';
    mp['}'] = '{';
    mp[']'] = '[';
    stack<char> parentheses;

    for (char ch : str) {
        // If the character is a closing bracket
        if (mp.count(ch)) {
            // If the stack is empty or the top of the stack is not the matching opening bracket
            if (parentheses.empty() || parentheses.top() != mp[ch]) {
                return false;
            }
            // Pop the matching opening bracket from the stack
            parentheses.pop();
        } else if (ch == '(' || ch == '{' || ch == '[') {
            // If the character is an opening bracket, push it onto the stack
            parentheses.push(ch);
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return parentheses.empty();
}

int main() {
    cout << boolalpha; // Print bool values as true/false
    cout << isValid("[]ahmed") << endl; // false, because of non-bracket characters
    cout << isValid("(){}[]") << endl; // true
    cout << isValid("([{}])") << endl; // true
    cout << isValid("([)]") << endl; // false
    cout << isValid("{[}") << endl; // false
    return 0;
}