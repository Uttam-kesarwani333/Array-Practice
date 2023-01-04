#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /*Enter your code here.*/
    vector<int> v;
    int n;
    cout<<"Enter Size of a Vector : ";
    cin>>n;
    for (int i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    return 0;
}
    