
// A array of 2m+1 size 
// m elements ar occured two times except a single element
// eg. arr[2m+1]= {2,5,2,5,9}
// eg. arr[2m+1]= {1,1,2,2,3}
#include<iostream>
using namespace std;

    void UniqueOccurence(int arr[],int n){

    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    cout<<ans;
    }

int main(){

    cout<<"Enter a size of Array : ";
    int n;
    cin>>n;
    int arr[10000];
    // Input an Array 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Display array
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    

    UniqueOccurence(arr,n);

    return 0;
}