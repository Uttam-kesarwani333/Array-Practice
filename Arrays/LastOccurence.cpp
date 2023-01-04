#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int FirstOccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(key=arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
    }
    return ans;
}
int main(){

    int arr[10000];
    cout<<"Input size : ";
    int n;
    cin>>n;
    // Input element of array : 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a key : ";
    int key;
    cin>>key;
    cout<<"Your Array : ";
    printArray(arr,n);
    cout<<endl<<"First Occurence : ";
    cout<<FirstOccurence(arr,n,key);

    return 0;
}
