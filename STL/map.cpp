#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string>m;

    m[1] = "Ajay"; //1 is key and " string " is value. 
    m[15] = "Ankush";
    m[13] ="Sojal";
    m[2] ="Suhani";
    m.insert({5,"bheem"});
    cout<<"before erase-->"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13---> "<<m.count(13)<<endl;
    cout<<"finding -13---> "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"After Erase---> "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
// insert, find , erase,count in these function complesxity in map case is o of log n.
auto it= m.find(5);
for(auto i= it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}



}

