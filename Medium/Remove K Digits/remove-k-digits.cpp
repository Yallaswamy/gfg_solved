//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        string res="";
        res.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            while(!res.empty() and k>0 and res.back()>s[i]){
                res.pop_back();
                k--;
            }
            res.push_back(s[i]);
        }
        while(k>0 && res.size()>0){
            res.pop_back();
            k--;
        }
        int i=0;
        while(res[i]=='0' and i<res.size()){
            i+=1;
        }
        if(i==res.size()) return "0";
        return res.substr(i);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends