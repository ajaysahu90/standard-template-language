#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ram");
    s.push("shyam");
    s.push("krishna");

    cout<<"top element of the stack---> "<<s.top()<<endl;
    s.pop();
    cout<<"top element----> "<<s.top()<<endl;
    cout<<"size of  stack---> "<<s.size()<<endl;
    cout<<"empty or not----> "<<s.empty()<<endl;

    
}