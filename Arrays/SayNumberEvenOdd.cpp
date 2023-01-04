#include<iostream>
using namespace std;
int main() {
  /* Enter your code here.*/
string arr[]={"","one","two","three","four","five","six","seven","eight","nine"};
  int a,b;
  cout<<"Enter a two Integer VAlue : ";
  cin>>a>>b;
  
  for (int i=a;i<=b;i++){
    if(i<=9){
cout<<arr[i]<<endl;
    }

    
 
  else if(i>9 && (i%2==0))
    cout<<"even"<<endl;

  else if(i>9 && (i%2!=0))
    cout<<"odd"<<endl;


  }
    return 0;

}