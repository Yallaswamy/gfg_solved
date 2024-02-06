//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
  int solve(int arr[],int n,vector<int>&dp){
      if(n==0) return 0;
      if(dp[n]!=-1) return dp[n];
      int ans=INT_MIN;
      for(int i=0;i<n;i++){
          int l=i+1;
          ans=max(ans,arr[i]+solve(arr,n-l,dp));
      }
      return dp[n]=ans;
  }
    int cutRod(int price[], int n) {
        //code here
        vector<int>dp(n+1,-1);
        int ans=solve(price,n,dp);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends