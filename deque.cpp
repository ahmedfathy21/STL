#include<iostream>
#include<queue>
using namespace std;
void print_back(deque<int>qu){

    cout<< "Print Deque back: "<<endl;
    while(!qu.empty()){
        cout<<qu.back()<<endl;
        qu.pop_back();

    }
}
void print_front(deque<int>qu){

    cout<< "Print Deque front: "<<endl;
    while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop_front();

    }
}
int main(){
deque <int> q;
q.push_back(10);//  10
q.push_back(20);//  10 20
q.push_back(30);//  10 20 30 
q.push_back(40);//  10 20 30 40 
q.push_back(50);//  10 20 30 40 50 
q.push_front(80);// 80 10 20 30 40 50 
q.push_front(0);//  0 80 10 20 30 40 50 
q.push_front(100);//100 0 80 10 20 30 40 50 
print_back(q);
print_front(q);



    return 0;
}