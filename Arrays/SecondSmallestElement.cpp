#include<iostream>
using namespace std;
void SecondLargestElement(int arr[],int size){
    int temp=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]  > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        }
    }
    cout<<"Your Second Smallest Number : "<<arr[1];
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
    SecondLargestElement(arr,size);
    return 0;
}