#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    } cout<<endl;
    return;
}

void ReversePart(vector<int> &v, int a,int b){
    for (int i = a, j = b; i<=j; i++,j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    } return;
}

void Reverse(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    while (i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    } return;
}

int main(){
    vector<int>v;
    int x;
    cin>>x;

    v.push_back(2);
    v.push_back(7);
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);

    Display(v);
    int n = v.size();

    if(x>n) x = x%n; // when x is greater than written in question
    
    ReversePart(v,0,n-x-1);
    ReversePart(v,n-x,n-1);
    Reverse(v);
 
    Display(v);



    // for (int i = 0, j = v.size()-x-1; i<=j ;i++,j--) {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }
    // for (int i = v.size()-x, j = v.size()-1; i<=j ;i++,j--) {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }

}