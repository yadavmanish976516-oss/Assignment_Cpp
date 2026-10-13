//Q20. Union shares same memory
#include <iostream>
using namespace std;

union Number{
    int x;
    float y;
    char z;
};

int main(){
    Number n;
    n.x=10;
    cout<<n.x<<endl;
    n.y=3.5;
    cout<<n.y<<endl;
    n.z='A';
    cout<<n.z;
    return 0;
}
