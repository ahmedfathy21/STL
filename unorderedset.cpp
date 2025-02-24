#include<iostream>
#include<unordered_set>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    unordered_set<int> s1 {1,2,3,4,7,5,6};
    s1.insert(10);
    s1.insert(11);
    for(auto v :s1)
    cout << v << endl;
auto itr = s1.find(11); // Fast cause it is internal representation
cout << *itr <<endl;
auto itr2 = find(s1.begin(),s1.end(),1);// Slow related to the upper one 
cout<< *itr2 << endl;
// Example: Erasing elements
s1.erase(10);
cout << "After erasing 10:" << endl;
for(auto v : s1)
    cout << v << endl;

// Example: Checking if an element exists
if(s1.find(5) != s1.end()) {
    cout << "5 is in the unordered set" << endl;
} else {
    cout << "5 is not in the unordered set" << endl;
}

// Example: Size of the unordered set
cout << "Size of the unordered set: " << s1.size() << endl;

// Example: Clearing the unordered set
s1.clear();
cout << "Size after clearing: " << s1.size() << endl;


    return 0;

} 