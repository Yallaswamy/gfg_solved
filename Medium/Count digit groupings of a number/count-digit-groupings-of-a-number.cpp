//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int solve(int ind,string &s,int prev,int n,vector<vector<int>>&dp){
	    if(ind>=n) return 1;
	    if(dp[ind][prev]!=-1) return dp[ind][prev];
	    int cur=0,ans=0;
	    for(int i=ind;i<n;i++){
	        cur+=s[i]-'0';
	         if(cur>=prev){
	             ans+=solve(i+1,s,cur,n,dp);
	        }
	    }
	    return dp[ind][prev]=ans;
	   
	}
	int TotalCount(string str){
	    
	    int n=str.size();
	    int ind=0,ans=0;
	    vector<vector<int>>dp(n+1,vector<int>(10000,-1));
	    ans=solve(ind,str,0,n,dp);
	    return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends