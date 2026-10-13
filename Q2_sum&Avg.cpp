// Q2. Find the sum and average of array elements
#include <iostream>
using namespace std;

int main(){
    int n,arr[100],sum=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<(double)sum/n;

    return 0;
}