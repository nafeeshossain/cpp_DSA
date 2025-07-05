#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    // 1 3 5 7 8 10 12 -> 31 Days
    // 4 6 9 11 -> 30 Days
    // 2 -> 28

    switch ((x<7 && x%2!=0) || (x>7 && x%2==0)) {
        case 1:
        cout<<"31 Days"; }
    switch (x==4 || x==6 || x==9 || x==11) {
        case 1:
        cout<<"30 Days"; }
    switch (x) {
        case 2:
        cout<<"28 Days"; }

    return 0;
}
