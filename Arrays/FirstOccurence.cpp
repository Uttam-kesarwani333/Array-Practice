#include<iostream>
using namespace std;
int FirstOccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        
    }
    return ans;
}
int LastOccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
            }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        
    }
    return ans;
}
int main(){

    int arr[100000];
    int n;
    cout<<"Enter a size of an Array : ";
    cin>>n;
    cout<<"Enter an Element of Array \n";
    // Inputs Array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Print Array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter a key : ";
    cin>>key;
    cout<<"First Occurence : "<<FirstOccurence(arr,n,key)<<endl;

    cout<<"Last Occurence : "<<LastOccurence(arr,n,key)<<endl;
    int TotalOccurence=LastOccurence(arr,n,key)-FirstOccurence(arr,n,key);
    cout<<"Total Ouccurence : "<<TotalOccurence;
    return 0;
}