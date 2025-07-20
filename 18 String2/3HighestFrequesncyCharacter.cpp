#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){

    string s = "aabbc";
    vector<int>v(26,0);
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;
    }
    int max = 0;
    for(int i=0; i<v.size(); i++){
        if(max<v[i]) max = v[i];
    }

    for(int i=0; i<v.size(); i++){
        if(max==v[i]){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }




    // string s = "raghavaa";
    // int max = 0;
    // vector<int>v;
    // for(int i=0; i<s.length(); i++){
    //     // char ch = s[i];
    //     int count = 1;
    //     for(int j=i+1; j<s.length(); j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(max<count) { max = count;
    //         v.push_back(i);}
    // } 
    // for(int i=0; i<v.size(); i++){

    // }
    
    
    
    
    // cout<<s[k]<<" "<<max;

}