#include<iostream>
using namespace std;

void insertElement(int arr[],int size){
    cout<<endl<<"Enter an Element which you want to Enterin an Array & specify Position also."<<endl;
    int item,pos;
    cin>>item>>pos;
    size++;
       for(int i=size-1;i>=pos;i--){
           arr[i]=arr[i-1];
       }
       arr[pos-1]=item;
}
int main(){
    int size;
    cout<<"Enter a size of Array : ";
    cin>>size;
    int arr[100]={0};
    // Taking Input
    for (int i=0;i<size;i++){
        cin>>arr[i];
    } 

    //Printing an Oribinal Array .
    for (int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
   cout<<endl;
    insertElement(arr,size);
    //Printing an array After insert an element.
    for (int i = 0; i<=size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}