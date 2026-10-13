//Q8. Perform arithmetic using enum
#include <iostream>
using namespace std;

enum Operation{ADD=1,SUB,MUL,DIV};

int main(){
    int a,b,op;
    cin>>a>>b>>op;

    switch(op){
        case ADD:cout<<a+b;break;
        case SUB:cout<<a-b;break;
        case MUL:cout<<a*b;break;
        case DIV:cout<<a/b;break;
        default:cout<<"Invalid operation";
    }
    return 0;
}
