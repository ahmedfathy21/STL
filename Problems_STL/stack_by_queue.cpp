#include<iostream>
#include<queue>
#include<stack>
using namespace std;
struct ourstack{
    queue<int> q;
    void push(int val){
        int s = q.size();
        q.push(val);
        while(s--)
        q.push(q.front()),q.pop();
    }
    void pop(){
        if(!q.empty())
        q.pop();

    }
    int top()
    {
        return q.front();

    }
     bool empty(){
        return q.empty();
    }


};

int main(){
ourstack st; 
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.pop();

 while(!st.empty()){

     cout << st.top() << endl;
     st.pop();
    }

    return 0;
}