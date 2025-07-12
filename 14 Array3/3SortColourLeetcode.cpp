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
    int i = 0,j = v.size()-1;
    while(i<j){
             if(v[i]==0 && v[j]==0) i++;
        else if(v[i]==0 && v[j]==1) i++;
        else if(v[i]==0 && v[j]==2) i++,j--;
        else if(v[i]==1 && v[j]==0) {swap(v,i,j);i++;}
        else if(v[i]==1 && v[j]==1) i++;
        else if(v[i]==1 && v[j]==2) j--;
        else if(v[i]==2 && v[j]==0) {swap(v,i,j);i++,j--;}
        else if(v[i]==2 && v[j]==1) {swap(v,i,j);j--;}
        else if(v[i]==2 && v[j]==2) j--;
  }cout<<endl;
}

int main(){
    vector<int>v;
    
    // v.push_back(2);
    // v.push_back(0);
    // v.push_back(1);

    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    int n=v.size();

    Display(v);

    // for (int i = 0; i <= n-1; i++){
    //     for (int j = i; j <= n-1; j++){
    //         if(v[i]>v[j]) swap(v,i,j);}
    // }
    
    

    sort(v);

    Display(v);
    
}