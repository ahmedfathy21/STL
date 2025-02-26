#include<iostream>
#include<queue>
#include<stack>
#include<map>
using namespace std;

int main(){

map<string, vector<string> > mp;

	int n;
	cin >> n;
    cout << "\n";

	while (n--) {
		string str;
		cin >> str;

		// add all prefixes to the map
		string cur = "";
		for (auto c : str)
			cur += c, mp[cur].push_back(str);
	}

	cin >> n;

	while (n--) {
		string str;
		cin >> str;

		for (auto cur : mp[str])
			cout << cur << " ";
		cout << "\n";
	}

    return 0;
}