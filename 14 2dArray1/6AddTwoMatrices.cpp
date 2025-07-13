#include<iostream>
#include<climits>
using namespace std;
int main(){

    int mat1[2][2] = {2,2,3,3};
    int mat2[2][2] = {2,2,3,3};

    for(int i=0; i<2; i++){ //Row
        for (int j = 0; j < 2; j++){ //Column
           mat1[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout<<"Final Matrix"<<endl;
    
    for(int i=0; i<2; i++){ //Row
        for (int j = 0; j < 2; j++){ //Column
            cout<<mat1[i][j]<<" ";
        } cout<<endl;
        
    }


}
