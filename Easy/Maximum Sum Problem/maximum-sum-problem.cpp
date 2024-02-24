//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //int a=0,b=0,c=0;
    int dp[1000001];
    int slove(int n){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=max(slove(n/2)+slove(n/3)+slove(n/4),n);
     
    }
        int maxSum(int n)
        {
            //code here.
            memset(dp,-1,sizeof(dp));
            int k=slove(n);
            return k;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends