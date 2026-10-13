//Q13. Pass structure to function
#include <iostream>
using namespace std;

struct Student{
    int roll;
    char name[20];
    float marks;
};

void display(Student s){
    cout<<s.roll<<endl;
    cout<<s.name<<endl;
    cout<<s.marks;
}

int main(){
    Student s;
    cin>>s.roll>>s.name>>s.marks;
    display(s);
    return 0;
}
