#include<iostream>
using namespace std;
int flag=0;
int index;

int SearchElement(int arr[],int size){
    cout<<endl<<"Enter an element which you want to learn : ";
    int item;
        cin>>item;
    // int flag=0
    for (int i=0;i<size;i++){
        if (arr[i]==item){
           
            flag=1;
            index=i;
            break;
        }
        
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
        cout<<arr[i];
    }
    SearchElement(arr,size);
    if(flag){
        cout<<"Element is PResent at Index : "<<index;
    }
    else {
        cout<<"Element is Absent";
    }

        return 0;
}