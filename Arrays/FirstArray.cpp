#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
    for (int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
    int arr[1000];
    cout<<"Enter size of Array";
    int size;
    cin>>size;
    for (int i =0 ; i<size;i++){
        cin>>arr[i];
    }
    printArray(arr,size);
    return 0;
}
