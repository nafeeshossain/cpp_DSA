#include<iostream>
#include<vector>
using namespace std;

void Display(vector<int>&v){for (int i = 0; i < v.size(); i++){cout<<v[i]<<" ";}cout<<endl;} 

void swap(vector<int>&v,int i,int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void sort(vector<int>&v){
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < v.size(); i++) {
        if(v[i]==0) zero++;
        else if(v[i]==1) one++;
        else two++;}
    for (int i = 0; i < v.size(); i++){
        if(i<zero) v[i]=0;
        else if(i<zero+one) v[i]=1;
        else v[i]=2;}cout<<endl; 
}

int main(){
    vector<int>v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    Display(v);
    sort(v);
    Display(v);
    
}