#include<iostream>
using namespace std;
void  SmallestElement(int arr[],int size){
int min=INT_MAX;
    for (int i=0;i<size;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    cout<<endl<<"Your minimum Number : "<<min;
}
int main(){
    int arr[100];
    cout<<"Enter a size of Array : ";
    int size;
    cin>>size;
    // Taking Inputs  
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    // Printing an Array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    SmallestElement(arr,size);
    return 0;
}