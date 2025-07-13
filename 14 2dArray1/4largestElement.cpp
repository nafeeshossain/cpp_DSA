#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[3][3]={1,2,0,90,5,68,-2,8,9};

    int a=INT_MIN;

    for(int i=0; i<3; i++){ //Row
        for (int j = 0; j < 3; j++){ //Column
           if(a<arr[i][j]) a=arr[i][j];
        }
        
    } cout<<a;


}
