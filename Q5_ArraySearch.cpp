//Q5. Search an element in an array
#include <iostream>
using namespace std;

int main(){
    int n,arr[100],key,index=-1;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }

    if(index!=-1)
        cout<<"Element found at index "<<index;
    else
        cout<<"Element not found";
    return 0;
}
