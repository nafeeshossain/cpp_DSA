#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int>&v){for (int i = 0; i < v.size(); i++){cout<<v[i]<<" ";}cout<<endl;} 

void swap(vector<int>&v,int i,int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void sortNegative(vector<int>&v){
    int i = 0,j = v.size()-1;
    while(i<j){
        if(v[j]<0) j--;
        if(v[i]>0) i++;
        if(i>j) break;
        if(v[j]>0 && v[i]<0) swap(v,i,j);}cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(-1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-5);
    v.push_back(1);
    v.push_back(-2);
    v.push_back(1);
    Display(v);
    sortNegative(v);
    Display(v);
    
}