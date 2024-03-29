//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i,int j,vector<vector<int>>&m,int n,string res,vector<string>&ans,vector<vector<int>>&vis){
        if(i<0 || j<0 || j>=n || i>=n || vis[i][j]==1 || m[i][j]==0){
            return ;
        }
        if(i==n-1 and j==n-1){
            ans.push_back(res);
            return;
        }
        vis[i][j]=1;
        solve(i-1,j,m,n,res+'U',ans,vis);
        solve(i,j+1,m,n,res+'R',ans,vis);
        solve(i+1,j,m,n,res+'D',ans,vis);
        solve(i,j-1,m,n,res+'L',ans,vis);
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int i=0,j=0;
        string res="";
        vector<string > ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        solve(i,j,m,n,res,ans,vis);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends