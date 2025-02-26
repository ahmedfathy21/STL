#include<iostream>
#include<vector>

using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> result;

    for (auto& asteroid : asteroids) {
    	// For every new asteroid, remove all what will explode
    	// Only may happens when asteroid going backword and something coming forward
        bool is_exploded = false;
        while (!result.empty() && asteroid < 0 && 0 < result.back()) {
        	// last will explode.
            if (result.back() < -asteroid) {
                result.pop_back();
                continue;	// See if more explode
            } else if (result.back() == -asteroid)	// both exploded
                result.pop_back();
            is_exploded = true;		// only asteroid explode
            break;
        }
        if (!is_exploded)
            result.push_back(asteroid);
    }

    return result;
}

int main(){

    vector<int> v;    
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
 vector<int> z = asteroidCollision(v);
for (auto i :z)
 cout << i << endl;


    return 0;
}