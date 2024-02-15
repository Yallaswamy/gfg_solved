//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void DFS(int node,vector<int>adjl[], vector<int>&vis){
      vis[node]=1;
      for(auto it:adjl[node]){
          if(!vis[it]){
              DFS(it,adjl,vis);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
       vector<int>adjl[V+1];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1){
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        int ans=0;
        vector<int>vis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                DFS(i,adjl,vis);
                ans+=1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends