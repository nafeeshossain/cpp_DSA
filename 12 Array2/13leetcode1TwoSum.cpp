#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x = 9;
    vector<int>v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if((v.at(i)+v.at(j))==x) {cout<<i<<" "<<j;
            break;}
        }
    }

}