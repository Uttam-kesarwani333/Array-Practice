#include<iostream>
using namespace std;
int main(){

    cout<<"Enter an Element";
    int n;
    cin>>n;
    int arr[1000];

    // Input an Element into Array
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Display an Array 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        cout<<endl;
    }
    // Display an Array After AlternateSwap 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}