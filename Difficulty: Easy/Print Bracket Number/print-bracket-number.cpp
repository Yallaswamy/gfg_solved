//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector<int>ans;
        stack<pair<char,int>>st;
        int cntopen=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                cntopen=cntopen+1;
                ans.push_back(cntopen);
                st.push(make_pair(str[i],cntopen));
            }
            if(str[i]==')'){
              ans.push_back(st.top().second);
              st.pop();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends