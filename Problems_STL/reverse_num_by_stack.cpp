#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int reverse_num(int num){
    if (num == 0)
		return 0;
    stack<int> st;
    while(num)
        st.push(num % 10), num/= 10;
    
    int tens = 1;
    while(!st.empty())
    num = st.top() * tens + num, tens *= 10, st.pop();

	return num;
    }
int main(){
cout << reverse_num(123);


    return 0;
}