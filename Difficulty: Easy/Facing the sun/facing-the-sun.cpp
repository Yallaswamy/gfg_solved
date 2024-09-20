//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &arr) {
        // code here
        int c=0;
	    int max=arr[0];
	    for(int i=1;i<arr.size();i++)
	    {
	        if(arr[i]>max)
	        {
	            c=c+1;
	            max=arr[i];
	        }
	    }
	    return c+1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> height;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            height.push_back(number);
        }
        Solution ob;
        int ans = ob.countBuildings(height);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends