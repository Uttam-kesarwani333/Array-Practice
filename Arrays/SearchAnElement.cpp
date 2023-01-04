#include<iostream>
using namespace std;
int search(int arr[],int size,int x){
        for (int i=0;i<size;i++){
            if (arr[i]==x){
                return i;
            }
            return -1;
        }
    }
int main(){
    cout<<"Enter a Element : ";
    int n;
    cin>>n;
    cout<<"Search an Element : ";
    int x;
    cin>>x;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=search(a,n,x);
    if (result==-1){
    cout<<"Element is Absent."<<endl;
    }
else
    cout<<"Element is Present at "<< result <<endl;
    return 0;
}