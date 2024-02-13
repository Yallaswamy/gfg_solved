//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int v, vector<pair<int,int>>edges) {
        // Code here
     //   cout<<edges[0].first<<" "<<edges[0].second;
      vector<int>adj[v+1];
      for(int i=0;i<edges.size();i++){
          adj[edges[i].first].push_back(edges[i].second);
          adj[edges[i].second].push_back(edges[i].first);
      }
      vector<vector<int>>v1;
      for(int i=0;i<v;i++){
          vector<int>v2;
          for(auto it:adj[i]){
              v2.push_back(it);
          }
          v1.push_back(v2);
      }
      return v1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<pair<int,int>>edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u,v});
        }
        Solution obj;
        vector<vector<int>> adj = obj.printGraph(V, edges);
        for(int i=0;i<V;i++)
        {
            sort(adj[i].begin(),adj[i].end());
            for(auto it:adj[i])
                cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends