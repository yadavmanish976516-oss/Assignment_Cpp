//Q15. Swap two numbers using pointers
#include <iostream>
using namespace std;

void swapNum(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x,y;
    cin>>x>>y;
    swapNum(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}
