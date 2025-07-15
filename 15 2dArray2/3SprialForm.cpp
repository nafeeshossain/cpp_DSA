#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Row: ";
    cin>>m;
    cout<<"Column: ";
    cin>>n;
    int arr[m][n];
    cout<<"OK! Enter Elements: ";

    for(int i=0; i<m; i++){ for (int j = 0; j < n; j++){ cin>>arr[i][j]; } }


    // int arr[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < n; j++){ //COLUMN
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;


    int minr=0, maxr=m-1, minc=0, maxc=n-1;
    for (int i = 0,j=0,l=0; i < maxr; i++,j++,l++){
        //cout<<i<<" "<<j<<" "<<l<<endl;
        if(i==minr && j==minc) for (j; j < maxc; j++) {
            cout<<arr[i][j]<<" ";
            
        }// cout<<endl;
        //cout<<i<<" "<<j<<" "<<l<<endl;

        if(i==minr && j==maxc) for (l; l < maxr; l++) {
            cout<<arr[l][j]<<" ";
            // j++;
        }//cout<<endl;
        //cout<<i<<" "<<j<<" "<<l<<endl;

        if(l==maxr && j==maxc) for ( j; j > minc; j--){
            cout<<arr[l][j]<<" ";
        }//cout<<endl;
        //cout<<i<<" "<<j<<" "<<l<<endl;

        if(j==minc && l==maxr) for (l ; l > minr; l--){
            cout<<arr[l][j]<<" ";
        }//cout<<endl;
        //cout<<i<<" "<<j<<" "<<l<<endl;
        minr++;
        maxr--;
        minc++;
        maxc--;
        //cout<<endl;
        //cout<<i<<" "<<j<<" "<<l<<endl;
    }
    return 0;
}