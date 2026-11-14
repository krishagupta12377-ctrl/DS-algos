#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
cout<<"is stack empty "<<s.empty()<<endl;
}