//Q10. Read and display details of multiple students
#include <iostream>
using namespace std;

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){
    int n;
    cin>>n;
    Student s[100];

    for(int i=0;i<n;i++){
        cin>>s[i].roll;
        cin>>s[i].name;
        cin>>s[i].marks;
    }

    for(int i=0;i<n;i++){
        cout<<"Roll="<<s[i].roll<<" Name="<<s[i].name<<" Marks="<<s[i].marks<<endl;
    }
    return 0;
}
