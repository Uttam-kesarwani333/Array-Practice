#include<iostream>
using namespace std;
int main(){
// int n;
// cout<<"Enter a size : ";
// cin>>n;
    string arr[1000]={"","one","two","three","four","five","six","seven","eight","nine"};

    int num;
    cout<<"Enter a number";
    cin>>num;
    if (num>9)
        cout<<"Greater than 9";
    else if(num<1)
        cout<<"Less Than 1";
    else 
        cout<<arr[num]<<endl;
    // for (int i=0;i<n;i++){
    //     cout<<arr[i]<<"  ";
    // }
    
        

    return 0;
}