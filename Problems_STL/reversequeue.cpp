#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse_queue(queue<int>& q){
stack<int>st;
while(!q.empty())
    st.push(q.front()),q.pop();

while(!st.empty())
    q.push(st.top()),st.pop();

}
int main(){
queue<int>qu;
qu.push(10);
qu.push(15);
qu.push(20);
qu.push(30);
qu.push(40);
reverse_queue(qu);
while(!qu.empty())
     cout<<qu.front()<<endl , qu.pop();


    return 0;
}