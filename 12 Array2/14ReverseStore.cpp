#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    } cout<<endl;
    return;
}

int main(){
    vector<int>v1;

    v1.push_back(2);
    v1.push_back(7);
    v1.push_back(5);
    v1.push_back(9);

    //Mysollution

    vector<int>v2;
    
    for(int i=v1.size()-1;i>=0;i--){
        v2.push_back(v1[i]);
    }

    //Sir Sollution
    // vector<int>v2(v1.size());
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     v2[i] = v1[v1.size()-1-i];
    // }
    
    Display(v1);
    Display(v2);

}