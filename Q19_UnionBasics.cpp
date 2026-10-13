//Q19. Basic union example
#include <iostream>
using namespace std;

union Data{
    int i;
    float f;
    char c;
};

int main(){
    Data d;
    d.i=65;
    cout<<d.i<<endl;
    cout<<d.c;
    return 0;
}
