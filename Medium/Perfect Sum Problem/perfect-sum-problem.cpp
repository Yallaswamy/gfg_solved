//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int m=1e9+7;
	int solve(int ind,int *arr,int sum,int n,vector<vector<int>>&dp){
	    if(sum==0){
	        return 1;
	    }
	    if(dp[ind][sum]!=-1) return dp[ind][sum];
	    if(ind>=n){
	        if(sum==0){
	            return 1;
	        }
	        return 0;
	    }
	    int pick=0,nonpick=0;
	     
	    if(sum>=arr[ind]){
	        pick=solve(ind+1,arr,sum-arr[ind],n,dp);
	    }
	    nonpick=solve(ind+1,arr,sum,n,dp);
	    
	    return dp[ind][sum]=(pick+nonpick) % m;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        int ind=0;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        sort(arr,arr+n);
        int k=solve(ind,arr,sum,n,dp);
        return k;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends