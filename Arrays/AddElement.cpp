#include<iostream>
using namespace std ;

void AddElement(int arr[],int size,int pos,int item){
    size++;

    for(int i=size-2;i>pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
}

int main(){
    int size;

    cout<<"Enter a Size of an Array : ";
    cin >>size;
    cout<<"Enter the Element Value\n";
    int arr[size];
    for(int i=0;i<size;i++){

        cin>>arr[i];
    }

        
    int pos,item;
    
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter an Item : ";
    cin>>item;

    AddElement(arr,size,pos,item);
cout<<"\nYour Arrays is : ";
    for(int i=0;i<size;i){
        cout<<arr[i]<<"  ";
    }
    return 0;
}

