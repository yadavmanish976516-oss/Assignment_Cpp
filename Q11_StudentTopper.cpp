//Q11. Find topper among students
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
    Student s[100],top;

    for(int i=0;i<n;i++)
        cin>>s[i].roll>>s[i].name>>s[i].marks;

    top=s[0];
    for(int i=1;i<n;i++){
        if(s[i].marks>top.marks)
            top=s[i];
    }

    cout<<"Topper is "<<top.name<<" with marks "<<top.marks;
    return 0;
}
