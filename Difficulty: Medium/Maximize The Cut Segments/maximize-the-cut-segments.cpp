//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int slove(int n,int x,int y,int z,vector<int>&dp){
        if(n<=0) return 0;
        if(dp[n]!=-1) return dp[n];
        int ans=INT_MIN;
        if(n>=x){
            ans=max(ans,1+slove(n-x,x,y,z,dp));
        }
       if(n>=y){
            ans=max(ans,1+slove(n-y,x,y,z,dp));
        }
        if(n>=z){
            ans=max(ans,1+slove(n-z,x,y,z,dp));
        }
        return dp[n]=ans;
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>dp(10007,-1);
        int ans=slove(n,x,y,z,dp);
        if(ans>0){
            return ans;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends