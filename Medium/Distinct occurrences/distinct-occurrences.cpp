//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    long long mod=1e9+7;
    long long  dp[1001][1001];
    int solve(int i,int j,string &s,string &t){
        if(i>=s.size() or j>=t.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int pick=0;
        if(s[i]==t[j] and j==t.size()-1)pick++;
        if(s[i]==t[j]){
            pick=(pick%mod+solve(i+1,j+1,s,t)%mod)%mod;
        }
        int nonpick=solve(i+1,j,s,t)%mod;
        return dp[i][j]=(pick+nonpick)%mod;
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
      memset(dp,-1,sizeof(dp));
      int k=solve(0,0,s,t);
      return k;
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends