//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
     void solve(string &s,vector<string>&ans,int i,string str)
    {
        if(i==s.size())
        {
            ans.push_back(str);
            return;
        }
        
        solve(s,ans,i+1,str+" "+s[i]);
        solve(s,ans,i+1,str+s[i]);
    }
    vector<string> permutation(string S){
        // Code Here
       vector<string>ans;
        string str;
        str.push_back(S[0]);
        solve(S,ans,1,str);
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends