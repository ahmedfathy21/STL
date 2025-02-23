#include<iostream>
#include<queue>
using namespace std;
void print(priority_queue<int> qu){
cout << "Priority queue Elements " ;
while(!qu.empty()){
    cout<<qu.top()<<endl;
    qu.pop();
    
}

}
int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(6);
    pq.push(8);
    pq.push(9);
    print(pq);


    return 0;
}