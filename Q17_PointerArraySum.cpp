//Q17. Sum array elements using pointer
#include <iostream>
using namespace std;

int main(){
    int n,arr[100],sum=0;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int *ptr=arr;
    for(int i=0;i<n;i++)
        sum+=*(ptr+i);

    cout<<"Sum="<<sum;
    return 0;
}
