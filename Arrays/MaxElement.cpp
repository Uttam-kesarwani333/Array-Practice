#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Size of Array";
    int size,arr[100];
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Before"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        if (arr[i] < arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"After"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<"\t";
    }
    return 0;
}