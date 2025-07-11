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
    vector<int>v;

    v.push_back(2);
    v.push_back(7);
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);

    Display(v);
    
    int i = 0;
    int j = v.size()-1;

    while (i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    
    Display(v);

}