#include<iostream>
using namespace std;
void ReverseArray(int arr[],int size){
    int s=0,e=size-1;
    int temp=0;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;e++;
    }
    cout<<endl<<"Reverse  Array : ";
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    int arr[100]={0};
    cout<<"Enter a Size of an Array : ";
    cin>>size;

    for (int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Original  Array : ";
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    ReverseArray(arr,size);
    return 0;
}