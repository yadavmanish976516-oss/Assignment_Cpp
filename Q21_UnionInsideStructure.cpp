//Q21. Union inside a structure
#include <iostream>
using namespace std;

struct Record{
    int type;
    union Data{
        int a;
        float b;
        char c;
    }d;
};

int main(){
    Record r;
    r.type=1;
    r.d.a=50;

    cout<<r.type<<endl;
    cout<<r.d.a;
    return 0;
}
