//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>pre(n),suf(n);
        
        pre[0]=arr[0];
        suf[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(pre[i]==suf[i+1]) return 1;
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends