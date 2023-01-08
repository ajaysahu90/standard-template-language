#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int , 5> a ={56,9,6,8,89};
    int size = a.size();
    cout<<"element at last Index="<<a.back()<<endl;
    cout<<"element at first Index="<<a.front()<<endl;
    for (int i = 0; i < size; i++)

    {
        cout<<a[i]<<endl;
    }
    cout<<"array is empty or not="<<a.empty()<<endl;
    cout<<"element at 2nd Index ="<<a.at(2)<<endl;
    

}