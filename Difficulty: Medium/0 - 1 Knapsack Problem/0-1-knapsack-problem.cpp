//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int slove(int i,int sum,vector<int>&wt,vector<int>&val){
        if(sum<=0 ) return 0;
        if(i>=wt.size()) return 0;
        int pick=0;
        if(sum>=wt[i]){
            pick=val[i]+slove(i+1,sum-wt[i],wt,val);
        }
        int nonpick=slove(i+1,sum,wt,val);
        return max(pick,nonpick);
        
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int res=slove(0,W,wt,val);
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends