#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(8);

    cout<<"Finding 6 element---> "<<binary_search(v.begin(),v.end(),8)<<endl;
    cout<<"Lower baund---> "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"upper baund---> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b = 5;

    cout<<"max--> "<<max(a,b)<<endl;
    cout<<"min---> "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<endl<<"a---> "<<a<<endl;

    string abcd ="ABCDE";
    reverse(abcd.begin(),abcd.end());
    cout<<"string ----> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sort---> "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

}