//Q9. Read and display student details
#include <iostream>
using namespace std;

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    Student s;
    cin>>s.roll;
    cin>>s.name;
    cin>>s.marks;

    cout<<"Roll="<<s.roll<<endl;
    cout<<"Name="<<s.name<<endl;
    cout<<"Marks="<<s.marks;
    return 0;
}
