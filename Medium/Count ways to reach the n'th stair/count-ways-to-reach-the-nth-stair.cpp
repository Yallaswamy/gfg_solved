//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        if(n==1) return 1;
        int mod=1e9+7;
        int f0=1,f1=1,ans=0;
        for(int i=1;i<n;i++){
            ans=f0%mod+f1%mod;
            //cout<<ans<<" ";
            f0=f1;
            f1=ans;
        }
        return ans%mod;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends