//vector is dynamic array//
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,1);
    vector<int> first(a);
    cout<<"print element"<<endl;
    for(int i:first){
        cout<<i<<" ";
    }cout<<endl;
        cout<<"capacity ="<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity = "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity = "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"element at 2nd Index = "<<v.at(2)<<endl;
    cout<<"Last element ="<<v.back()<<endl;
    cout<<"first element = "<<v.front()<<endl;
    cout<<"empty or not= "<<v.empty()<<endl; 
    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    i:v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"before clear size = "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size = "<<v.size()<<endl;     

}
