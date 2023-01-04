//YOUR CODE// 
 
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl;
  //Type your code here
	int arr[100]={0};
	int n;
	int sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>arr[i];
			
	}
	for (int i=0;i<n;i++){
	if (arr[i]%2==0){
		sum+=arr[i];
	}
	}
	cout<<"Sum of Even numbers in the Array :"<<sum;
	return 0;
}
 
 //YOUR CODE ENDS// 
 
 //SOLUTION MENTIONED BELOW // 
 
// #include <iostream>
// using namespace std;
// int main() {
//     int x,i,sum=0;
//     cin>>x;
//     int arr[x];
//     for(i=0;i<x;i++)
//     {
//         cin>>arr[i];
//     }
//     for(i=0;i<x;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             sum=sum+arr[i];
//         }
//     }
//     cout<<"Sum of Even numbers in the Array :"<<sum;
// }
 
 //SOLUTION ENDS//