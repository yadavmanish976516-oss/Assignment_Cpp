//Q7. Display day names using enum values
#include <iostream>
#include <string>
using namespace std;

enum DayName{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main(){
    int d;
    cin>>d;
    string name[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    if(d>=Sunday&&d<=Saturday)
        cout<<name[d];
    else
        cout<<"Invalid day";
    return 0;
}
