#include<iostream>
#include<queue>
#include<stack>
using namespace std;


int scoreofparentheses(string str){

    stack<int> st;

    st.push(0);
    for(auto c : str){
        if(c == '('){
            st.push(0);
        }
        else {

            int last = st.top();
            st.pop();
            
            if(last == 0)
            last = 1;
            else
            last *=2;
            
            int parent_par = st.top() + last;	// new total sum
			st.pop();
			st.push(parent_par);
            
        }
                       }
        return st.top();
    }


int main(){


    cout<< scoreofparentheses("(()(()))(()(()))");
    return 0;
}


