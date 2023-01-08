#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    cout<<endl;
    cout<<"print first element ="<<d.at(1)<<endl;
    cout<<"print front= "<<d.front()<<endl;
    cout<<"print back ="<<d.back()<<endl;
    cout<<"empty or not = "<<d.empty()<<endl;

    cout<<"before erase size "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase size"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }





}