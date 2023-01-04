#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    // This Loop for For Round i=0 to i=n-1
      for (int i=1;i<n;i++){   
        // This loop to checks its adjacent element

        //  j=0 to j  n-i-1
        for (int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                // Increasing Order
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void Bubble_Sort(int arr[],int n){

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }    

}
int main (){
    int arr[100];
    int n;
    cout<<"Enter a size of an Array : ";
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    Bubble_Sort(arr,n);
    cout<<endl<<"Sorted Array : ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }
 
//  !!!!!!!!!!@#$%^&*()@@@@@@@#############$$$$$$$$$$$$$$$%%%%%%%%%%%%%%^^^^^^^^^^^&&&&&&&&&&&&&****************(((((((((())))))))))

// #include<algorithm>
// #include<iostream>
// using namespace std;

// void BubbleSort(int arr[],int n){
//     for (int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++){

//             if (arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);


//             }
//         }
//     }
//     cout<<"Youjr Sorted Array : "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"  ";
//     }
// }

// int main(){

// int n;
// cout<<"Enter a size of an Array : ";
// cin>>n;
// int arr[1000];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// BubbleSort(arr,n);
//     return 0;
// }