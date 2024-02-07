//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int ind,int sum,int wt[],int val[],int n,vector<vector<int>>&dp){
        if(ind>=n) return 0;
        if(sum==0) return 0;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int pick=0;
        if(sum>=wt[ind]){
            pick=val[ind]+solve(ind+1,sum-wt[ind],wt,val,n,dp);
        }
        int nonpick=solve(ind+1,sum,wt,val,n,dp);
        return dp[ind][sum]=max(pick,nonpick);
        
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
       int ans=0;
       int ind=0;
       ans=solve(ind,W,wt,val,n,dp);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends