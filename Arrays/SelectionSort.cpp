#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
                
        }
    }
}
int main (){
    int arr[100];
    int n;
    cout<<"Enter a size of an Array : ";
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    InsertionSort(arr,n);
    cout<<endl<<"Sorted Array : ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}