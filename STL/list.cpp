#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;    
    
    list<int> n(7,100);
    cout<<"printing number ";
    for(int i : n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<endl;
    }
    cout<<"front ="<<l.front()<<endl;
    cout<<"back ="<<l.back()<<endl;
    cout<<"empty or not = "<<l.empty()<<endl;
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i : l){
        cout<<i<<endl;
    }
    cout<<"size of list "<<l.size()<<endl;

}