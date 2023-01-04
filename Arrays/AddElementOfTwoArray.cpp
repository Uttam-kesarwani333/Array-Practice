#include<iostream>
using namespace std;
int main(){
    int n,m;
    int sum=0;
    int a1[100],a2[100];
    cout<<"Enter a Size of Two Array : "<<endl;
    cin >>n>>m;
    cout<<"Enter an Element for First Array : ";
    for(int i=0;i<n;i++){
        cin>>a1[i];
        sum+=a1[i];
    }
    cout<<"Enter an Element for Second Array : ";
    for(int i=0;i<m;i++){
        cin>>a2[i];
        sum+=a2[i];
    }
cout<<sum;



    return 0;
}