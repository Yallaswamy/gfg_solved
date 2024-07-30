//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void slove(int i,int j,vector<vector<int>>&mat,string str,vector<vector<int>>&vis,int n,int m,vector<string>&ans){
        if(i<0 or j<0 or i>=n or j>=m or vis[i][j] or mat[i][j]==0){
            return ;
        }
        if(i==n-1 and j==m-1){
            ans.push_back(str);
            return ;
        }
        vis[i][j]=1;
        slove(i+1,j,mat,str+'D',vis,n,m,ans);
        slove(i-1,j,mat,str+'U',vis,n,m,ans);
        slove(i,j+1,mat,str+'R',vis,n,m,ans);
        slove(i,j-1,mat,str+'L',vis,n,m,ans);
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string>ans;
        string str="";
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        slove(0,0,mat,str,vis,n,m,ans);
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
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends