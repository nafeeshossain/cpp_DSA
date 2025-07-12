#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>&v){
    int zero = 0, one = 1;
    for (int i = 0; i < v.size(); i++) {
        if(v[i]==0) zero++;
        else one++;}
    for (int i = 0; i < v.size(); i++){
        if(i<zero) v[i]=0;
        else v[i]=1;}cout<<endl; 
}

void sort02(vector<int>&v){
    int i = 0,j = v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[j]==0 && v[i]==1){
            v[i]=0;
            v[j]=1;}} cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    //sort01(v); //Method 1
    sort02(v); //Method 2

    for (int i = 0; i < v.size(); i++) { cout<<v[i]<<" "; }
    
}