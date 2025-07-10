#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(6);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(6);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(6);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    return 0;
}