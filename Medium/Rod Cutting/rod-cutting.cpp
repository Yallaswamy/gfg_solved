//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
  int solve(int ind,int *arr,int sum,int n){
      if(ind>sum){
          return 0;
      }
      
      if(dp[ind][sum]!=-1) return dp[ind][sum];
      if(sum==0)return 0;
      int pick=0;
      if(sum-ind>=0){
           pick=arr[ind-1]+solve(ind,arr,sum-ind,n);
      }
      int nonpick=solve(ind+1,arr,sum,n);
      return dp[ind][sum]=max(pick,nonpick);
  }
    int cutRod(int price[], int n) {
        //code here
        int ind=0;
        int ans=0;
        memset(dp,-1,sizeof(dp));
        ans=solve(ind+1,price,n,n);
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