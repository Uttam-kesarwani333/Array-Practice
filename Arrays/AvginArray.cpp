#include<iostream>
using namespace std;
void printArray(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[100];
    int size;
    int sum=0;
    cout<<"Enter a Size of an Array";
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    printArray(arr,size);
    float avg=(float)sum/size;
    cout<<"Your Avg num : "<<avg;
    return 0;
}