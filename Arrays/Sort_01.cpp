#include<iostream>
using namespace std;
void Sort01(int arr[],int n){

    int left=0,right=n-1;
    while(left<right){

        if(arr[left]==0 )
            left++;
        else if(arr[right]==1 )
            right--;
else if( arr[left==1 && arr[right] ==0] )
    swap(arr[left++],arr[right--]);

    }
    }

int main(){

    cout<<"Enter a size of Array : ";
    int n;
    cin>>n;

    int arr[100];

    // Input Element an Array 
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Sort01(arr,n);

    // Display Element an Array 
    for(int i=0;i<n;i++)
        cout<<arr[i];


  return 0;  
}