//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int solve(int ind1,int ind2,int ind3,string &a,string &b,string &c,int n1, int n2, int n3,vector<vector<vector<int>>>&dp){
        if(ind1==n1 || ind2==n2 || ind3==n3){
            return 0;
        }
        if(dp[ind1][ind2][ind3]!=-1) return dp[ind1][ind2][ind3];
        int pick=0;
        if(a[ind1]==b[ind2] and a[ind1]==c[ind3]){
            pick=1+solve(ind1+1,ind2+1,ind3+1,a,b,c,n1,n2,n3,dp);
        }
        int nonpick1=max(solve(ind1+1,ind2,ind3,a,b,c,n1,n2,n3,dp),solve(ind1,ind2+1,ind3,a,b,c,n1,n2,n3,dp));
        int nonpick2=max(nonpick1,solve(ind1,ind2,ind3+1,a,b,c,n1,n2,n3,dp));
        return dp[ind1][ind2][ind3]=max(pick,nonpick2);
    }

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
            return solve(0,0,0,A,B,C,n1,n2,n3,dp);
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends