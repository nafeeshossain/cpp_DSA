#include <iostream>
using namespace std;

int main(){
    int x,y;
    char op;
    cin>>x>>op>>y;

    // if(op=='+') cout<<x+y;
    // if(op=='-') cout<<x-y;
    // if(op=='*') cout<<x*y;
    // if(op=='/') cout<<x/y;

    switch (op)
    {
        case '+':
        cout<<x+y;
        break;

        case '-':
        cout<<x-y;
        break;

        case '*':
        cout<<x*y;
        break;

        case '/':
        cout<<x/y;
        break;
    
        default:
        break;
    }


    return 0;
}
