#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("KUMAR");
    q.push("HOME");
    q.push("CITY");
    q.push("TRAIN");

    cout<<"size before pop---> "<<q.size()<<endl;

    cout<<"first element---> "<<q.front()<<endl;
    cout<<"last element---> "<<q.back()<<endl;
    q.pop();
    cout<<"first element---> "<<q.front()<<endl;
    cout<<"size after pop---> "<<q.size()<<endl;
    

}