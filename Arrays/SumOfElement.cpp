#include<iostream>
using namespace std;

int main(){

    int arr[100]={0};
    cout<<"Enter a size of an Array : ";
    int size;
    cin>>size;
    int sum=0;
    // Taking Inputs  
    for (int i=0;i<size;i++){
        cin>>arr[i];
    sum+=arr[i];
    }

    // Printing an Array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Your Sum is : "<<sum;
    return 0;
}