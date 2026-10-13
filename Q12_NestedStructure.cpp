//Q12. Use nested structure
#include <iostream>
using namespace std;

struct Address{
    char city[20];
    int pin;
};

struct Student{
    int roll;
    char name[20];
    Address add;
};

int main(){
    Student s;
    cin>>s.roll>>s.name>>s.add.city>>s.add.pin;

    cout<<s.roll<<endl;
    cout<<s.name<<endl;
    cout<<s.add.city<<endl;
    cout<<s.add.pin;
    return 0;
}
