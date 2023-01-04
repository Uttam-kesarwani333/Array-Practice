#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    // Taking Inputs
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Printing an Odd ELments
    for(int i=0;i<n;i++){
      if(arr[i]%2!=0){
          cout<<arr[i]<<" ";
      }
    }

    // Printing an Even ELments
    for(int i=0;i<n;i++){
      if(arr[i]%2==0){
          cout<<arr[i]<<" ";
      }
       
    }
    
return 0;

}