#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key){

    int low=0,high=n-1;
    while(low<high){
    int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (key<arr[mid]){
            high=mid-1;
        }
        else 
            low=mid+1;
    }
    return -1;
}

int main(){

    cout<<"Enter a Size of an Array : ";
    int n;
    cin>>n;
    int arr[10000];
    // Element Inputs

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Element Print

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter a Element which you want to search ";
    int key;
    cin>>key;

    cout<<endl<<BinarySearch(arr,n,key);

    return 0;

}
