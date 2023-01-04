#include<iostream>
using namespace std;
void LinearSearch(int arr[],int size,int item){
    int flag=0;
    int loc=0;
    for(int i=0;i<size;i++){
        if (arr[i]==item ){
            flag =1;
            loc=i+1;
            break;
        }
    }
    if (flag==1){
        cout<<endl<<"Item Found at Position : "<<loc;
    }
    else{
        cout<<endl<<"Item not Found";
    }
}
int main(){
    int arr[100]={0};
    cout<<"Enter a Size of Array : ";
    int size;
    cin>>size;
    //Taking Inputs
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<" Enter an Element which you want to search : ";
    int item;
    cin>>item;
    LinearSearch(arr,size,item);
    return 0;
}