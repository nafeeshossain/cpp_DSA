#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);
    cout<<"Size: "<<v.size()<<"Capacity: "<<v.capacity(); //the size is also 5

    v[0] = 1;
    cout<<v[0]<<v[1];

    vector<int> vec(5,7); // The size is 5 and all elements are 7

    return 0;
}