//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int op,int co,int n,string &s,vector<string>&ans){
         if(op==n and co==n) {
             ans.push_back(s);
            return ;
         }
         if(op<n){
             s.push_back('(');
             solve(op+1,co,n,s,ans);
             s.pop_back();
         }
         if(op>co){
             s.push_back(')');
             solve(op,co+1,n,s,ans);
             s.pop_back();
         }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        int op=0,co=0;
        vector<string>ans;
        string s;
        solve(op,co,n,s,ans);
        return ans;
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
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends