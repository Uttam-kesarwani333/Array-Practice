//  Write a program to Print the Average of Numbers in array at an even position
#include <iostream>
using namespace std;

int main(){
int sum=0;
float totalEvenNum;
    int arr[100]={0};
    cout<<"Enter a size of Array :  ";
    int size;
    cin>>size;

    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your Array are : ";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
  totalEvenNum=size/2;
    for (int i=1;i<size;i+=2){
        sum+=arr[i];
    }
float result =sum/totalEvenNum;
    cout<<"Print the Average of Numbers in array at an even position : "<<result;
    return 0;
}