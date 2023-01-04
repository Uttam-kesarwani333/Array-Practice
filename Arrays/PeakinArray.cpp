#include<iostream>
using namespace std;
int PeakInArray(int arr[],int n){
    int s=0,e=n-1;
    int mid;
    while(s<e){
        mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else 
            e=mid;
    }
    return mid;
}
int main(){

    int arr[1000];

    int n;
    // input Size
    cout<<"Enter a Size of Array : ";
    cin>>n;
    // Input Array
    cout<<"Enter an Element of Array \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Print Array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"End of Funtion";
    cout<<endl<<endl;
    cout<<PeakInArray(arr,n);
    return 0;
}