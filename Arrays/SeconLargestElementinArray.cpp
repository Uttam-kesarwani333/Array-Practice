#include<iostream>
#include<algorithm>

using namespace std;

int print2largest(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    for(int i=n-2;i>=0;i--){
	        if (arr[n-1]!=arr[i]){
	            return arr[i];
	        }
	    }
	    return -1;
	    
	}
		
int main(){ 
    int arr[]={1,2,3,4,5,6,7,9,9};
    cout<<print2largest(arr,9);


    return 0;
}