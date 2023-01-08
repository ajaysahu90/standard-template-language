#include<iostream>
#include<queue>

using namespace std;

int main(){
    //max heap
    priority_queue<int> maxh;
    //min heap
    priority_queue<int,vector<int>,greater<int>>minh;
    

    maxh.push(1);
    maxh.push(15);
    maxh.push(140);
    maxh.push(22);
    maxh.push(80);
    cout<<"maximum queue "<<endl;
    cout<<"size "<<maxh.size()<<endl;
    int a = maxh.size();
    for(int i =0; i < a; i++){
        cout<<maxh.top()<<" ";
        maxh.pop();
    }cout<<endl;

    minh.push(1);
    minh.push(15);
    minh.push(140);
    minh.push(22);
    minh.push(80);
    cout<<"Minimum Queue "<<endl;
    cout<<"size "<<minh.size()<<endl;
    int b = minh.size();
    for(int j =0; j < b; j++){
        cout<<minh.top()<<" ";
        minh.pop();
    }cout<<endl;




}














