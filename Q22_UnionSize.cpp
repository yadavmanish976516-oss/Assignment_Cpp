//Q22. Check size of union and structure
#include <iostream>
using namespace std;

union Data{
    int a;
    float b;
    char c;
};

struct Sample{
    int a;
    float b;
    char c;
};

int main(){
    cout<<"Union size="<<sizeof(Data)<<endl;
    cout<<"Structure size="<<sizeof(Sample);
    return 0;
}
