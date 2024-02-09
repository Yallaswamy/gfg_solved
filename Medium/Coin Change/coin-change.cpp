//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long dp[1001][1001];
  long long solve(long long ind,int sum,int *arr,int n){
      if(sum<0){
          return 0;
      }
      if(ind>=n){
          if(sum==0){
              return 1;
          }
          return 0;
      }
      if(dp[ind][sum]!=-1) return dp[ind][sum];
      if(sum==0){
          return 1;
      }
      long long pick=0,nonpick=0;
      if(sum>=arr[ind]){
        pick=solve(ind,sum-arr[ind],arr,n);
      }
      nonpick=solve(ind+1,sum,arr,n);
      return dp[ind][sum]=pick+nonpick;
  }
    long long int count(int coins[], int N, int sum) {

        // code here.
      //  vector<vector<long long>>dp(N+1,vector<long long>(sum+1,-1));
         memset(dp,-1,sizeof(dp));
        long long  ind=0;
        return solve(ind,sum,coins,N);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends