#include<iostream>
#include<queue>
using namespace std;
void print_queue(queue<int> p){
    while(!p.empty()){
        cout<<p.front() << endl;
        p.pop();
    }

}
int main(){
  queue<int> q;
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
// cout << "   The element in the queue " << q.back() << endl;
print_queue(q);
return 0;
}