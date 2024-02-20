//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int solve(int ind,string &s,map<string,int>&mp){
        if(ind==s.size()) return 1;
        int c=0;
        string st="";
        for(int j=ind;j<s.size();j++){
            st+=s[j];
            if(mp.find(st)!=mp.end()){
                c=max(c,solve(j+1,s,mp));
            }
        }
        return c;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        map<string ,int>mp;
        for(auto it:dictionary){
            mp[it]++;
        }
        int ind=0;
        return solve(ind,s,mp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends