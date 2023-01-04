// a Array arr[n], size is n
// the element of Array arr[n] is 1 to n-1 
// And the last index contain any value  between 1 to n-1 (Repeat)
// Eg. Array arr[5]={1,2,3,4,2}
// Eg. Array arr[8]={1,2,3,4,5,6,7,4}

#include<iostream>
using namespace std;
void FindDuplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
    ans=ans^arr[i];

}
for(int i=0;i<n;i++){
    ans=ans^i;
}
cout<<ans;

}

int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int maxi=arr[0],mini=0;
	for(int i=0;i<n;i++){
		if(maxi<arr[i])
			maxi=arr[i];
		if(mini>arr[i])
			mini=arr[i];
	}
	return (maxi+mini);
}







int main(){

    cout<<"Enter a size of Array : ";
    int n;
    cin>>n;
    int arr[1000];

    // Input Array 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//     // Display Array 

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// cout<<endl;
//     FindDuplicate(arr,n);
cout<<sumOfMaxMin(arr,n);

    return 0;
}