#include<iostream>
#include<set>

using namespace std;
int main(){

    set<int> s;
     s.insert(1);
     s.insert(1);
     s.insert(2);
     s.insert(2);
     s.insert(15);
     s.insert(15);
     s.insert(0);
     s.insert(10);
for(int i:s){
    cout<<i<<endl;
}cout<<endl;

set<int>::iterator it = s.begin();
it++;
s.erase(it);
for(int i:s){
    cout<<i<<endl;
}cout<<endl;

cout<<"15 is present or not---> "<<s.count(2)<<endl;
set<int>::iterator itr = s.find(2);
for(auto it=itr; it!=s.end();it++){
    cout<<*it<<" ";

}cout<<endl; //insert,find,erase,count time complexity is o of log n.
             //size,begin,end,empty time complexity is o of 1.




}