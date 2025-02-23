#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> v ){

    for(size_t i=0;i < v.size();i++)
    cout << v[i] << endl;
}
int print_size_vector(vector<int> v){
    cout <<v.size() <<endl;
    return v.size();
}
int main(){
    vector <int>v;    
    vector <int>v2 ={1,2,3,4};    
    cout << v.size() <<endl;
    cout << v.max_size() <<endl;
    cout << v.empty() <<endl;
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    print_vector(v2);
    

}