#include<iostream>
using namespace std;
void delElement(int arr[],int size){
    cout<<endl<<"Enter a position which you want to delete : ";
    int pos;
    cin>>pos;
    
    // Shifting Backward
    for (int i=pos;i<size;i++){
        arr[i-1]=arr[i];
    }
}
int main(){

    int arr[100]={0};
    int size;
    cout<<"Enter a Size of Array : ";
    cin >> size;
// Taking Input
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
// Printing an Original Array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    delElement(arr,size);
// Printing an Array After Delete an Element  
    for (int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 