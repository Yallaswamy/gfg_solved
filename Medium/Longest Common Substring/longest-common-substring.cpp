//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int ans=0;
    int solve(int ind1,int ind2,string &s1,string &s2,int n,int m,vector<vector<int>>&dp){
        if(ind1>=n or ind2>=m) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        int pick=0,nonpick=0;
        if(s1[ind1]==s2[ind2]){
            pick=1+solve(ind1+1,ind2+1,s1,s2,n,m,dp);
            ans=max(ans,pick);
        }
        else{
            pick=0;
        }
        solve(ind1+1,ind2,s1,s2,n,m,dp);
        solve(ind1,ind2+1,s1,s2,n,m,dp);
        return dp[ind1][ind2]=pick;
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ind1=0,ind2=0;
         solve(ind1,ind2,S1,S2,n,m,dp);
         return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends