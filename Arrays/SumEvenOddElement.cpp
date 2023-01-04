#include <iostream>
using namespace std;

int main(){
 int evensum=0;
 int oddsum=0;
    int n;
    cout<<"Enter a size : ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){

        cin>>arr[i];
        if (arr[i]%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }
    // for(int i=0;i<n;i++){

    //     cout<<arr[i]<<" ";
    // }
cout<<evensum<<"  "<<oddsum;


    return 0;
}