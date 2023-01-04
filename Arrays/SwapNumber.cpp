#include <iostream>
using namespace std;

void swappy(int n1,int n2){
    int temp;
temp =n1;
n1=n2;
n2=temp;
cout<<endl<<n1<<"  "<<n2;
}

int main(){

int n1,n2;
cout<<"Enter two number : ";
cin>>n1>>n2;
cout<<n1<<"  "<<n2<<endl;
swappy(n1,n2);

return 0;
}