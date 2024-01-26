//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void solve(int ind,vector<int>A,vector<int>&ds,vector<vector<int>>&v,int n){
        if(ind>=n){
            v.push_back(ds);
            return;
        }
        ds.push_back(A[ind]);
        solve(ind+1,A,ds,v,n);
        ds.pop_back();
        solve(ind+1,A,ds,v,n);
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>>v;
        vector<int>ds;
        int ind=0,n=A.size();
        solve(ind,A,ds,v,n);
        sort(v.begin(),v.end());
        return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends