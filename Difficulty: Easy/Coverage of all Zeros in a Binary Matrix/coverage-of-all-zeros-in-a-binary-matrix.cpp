//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    if(i>0 and matrix[i-1][j]==1){
                        l++;
                    }
                    if(i<matrix.size()-1 and matrix[i+1][j]==1){
                        d++;
                    }
                    if(j>0 and matrix[i][j-1]==1){
                        r++;
                    }
                    if(j<matrix[0].size()-1 and matrix[i][j+1]==1){
                        u++;
                    }
                }
            }
           
        }
        return l+r+u+d;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends