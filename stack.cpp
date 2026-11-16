#include<bits/stdc++.h>
using namespace std;
 
int main() {
    stack<string> st1;
    st1.push("Hello");
    st1.push("world");
    cout<<st1.size()<<endl;
    cout<<"Top element : " <<st1.top()<<endl;
    st1.pop();
    cout<<"Top element after popping : "<<st1.top()<<endl;

    queue<int> q;
    cout<<q.size()<<endl;
    q.push(100);
    q.push(200);
    q.push(300);

    cout<<q.front()<<endl;

    deque<int> dq;
    dq.push_back(100);
    cout<<dq.back()<<endl;
    dq.pop_back();

    dq.push_front(200);
    cout<<dq.front();
    return 0;
    
}