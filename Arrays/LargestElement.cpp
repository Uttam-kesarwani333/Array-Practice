#include<iostream>
using namespace std;
void LargestElement(int arr[],int size){
    int max=INT_MIN;
    for (int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }      
    
    }
    cout<<endl<<"Your maximum Number : "<<max;

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
    LargestElement(arr ,size);
    return 0;
}