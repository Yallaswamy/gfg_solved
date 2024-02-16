//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int  solve(int ind,vector<int>&arr,int sum,int n,vector<vector<int>>&dp){
	   // if(sum<0) return 1e9;
	   if(sum==0)return 0;
	    if(ind==n)
	    {
	        return 1e9;
	    }
	    if(dp[ind][sum]!=-1) return dp[ind][sum];
	    int pick=1e9;
	    if(sum>=arr[ind]){
	        pick=1+solve(ind,arr,sum-arr[ind],n,dp);
	    }
	    int  nonpick=solve(ind+1,arr,sum,n,dp);
	    return dp[ind][sum]=min(pick,nonpick);
	}
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    // Your code goes here
	    int ind=0;
	    vector<vector<int>>dp(M+1,vector<int>(V+1,-1));
	    int ans=1e9;
	    ans=solve(ind,coins,V,M,dp);
	    if(ans==1e9) return -1;
	    else return ans;
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends