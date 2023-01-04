#include<iostream>
using namespace std;
int temp=0;
// void Sort(int arr[],int size){
//         
//     for (int i=0;i<size;i++){
//         for (int j=1;j<size;j++){
//             if (arr[i]<arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;}
//         }}
    // Print an Original Array 
    
//     for(int i=0;i<size;i++){
//         cout<<" Your Sorted Array : ";
//         cout<<arr[i]<<"  ";
//     }
// }

void Sort(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]  > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        }
    }

    for(int i=0;i<size;i++){
        cout<<" Your Sorted Array : ";
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter a size : ";
    cin>>size;
    // Taking Inputs
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // Print an Original Array 
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }

    Sort(arr,size);

   
    return 0;
}