// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        int swap=0;
        int temp;
        bool isSwapp=true;
        for (int rnd=1;rnd<n;rnd++){
            for (int i=0;i<n-i;i++){
                if (roll[i]<roll[i+1]){
                    // swap(roll[i],roll[i+1]);
                    temp=roll[i];
                    roll[i]=roll[i+1];
                    roll[i+1]=temp;
                    swap++;
                    isSwapp=false;
                }
            }
             if (isSwapp)
        break;
        }
        int sum=0;
        for (int i=0;i<n;i++){
         sum+=marks[i];}
         cout<< swap<<endl;
          if( ((sum - swap) )/n < avg ) return 0;
        else return 1;
    
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}
  // } Driver Code Ends