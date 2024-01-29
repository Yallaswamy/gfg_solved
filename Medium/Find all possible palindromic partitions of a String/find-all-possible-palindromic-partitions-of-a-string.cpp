//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
 void solve(int ind,string &s,vector<string>&ds,vector<vector<string>>&v,int n){
      if(ind==n) {
          v.push_back(ds);
         return ;
      }
      for(int i=ind;i<n;i++){
          string str=s.substr(ind,i-ind+1);
          if(str == string(str.rbegin(),str.rend())){
              ds.push_back(str);
              solve(i+1,s,ds,v,n);
              ds.pop_back();
          }
      }
          
      
  }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        int ind=0;
        int n=S.size();
        vector<vector<string>>v;
        vector<string>ds;
         solve(ind,S,ds,v,n);
         return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends