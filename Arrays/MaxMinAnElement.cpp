#include<iostream>
using namespace std;
void MaxMin(int arr[],int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for (int i=0;i<n;i++){
    if( arr[i]>maxi){
        maxi=arr[i];
    }
    if( arr[i]<mini){
        mini=arr[i];
    }
    }
    cout<<"Your MAximum : "<<maxi;
    cout<<"Your Minimum : "<<mini;
    }
int main(){
    int size;
    int arr[100];
    cout<<"Enter a Size of an Array : ";
    cin>>size;

    for (int i =0;i<size;i++){
        cin>>arr[i];
    }
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    MaxMin(arr,size);
    return 0;
}