#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
    
    int x,y;
    float power = 1;
    cout<<"Enetr Base: ";
    cin>>x;
    cout<<"Enetr exponent: ";
    cin>>y;

    bool flagx = true;
    if (x<0 && y&2==0) { flagx = false; }

    bool flagy = true;
    if (y<0) { flagy = false; y = -y;}
    
    for (int i = 1; i <= y; i++) { power = power * x; }
    
    if(flagx == false) {power = -power; }
    if(flagy == false) {power = 1/power; y = -y;}
    
    if (x==0 && y==0){ cout<<"Not Difined"; 
    } else cout<<x<<" raised to the power of "<<y<<" = "<<power;
      
    return 0;
}