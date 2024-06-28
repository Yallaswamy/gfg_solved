//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool ispal(vector<int>&v){
        for(int i=0;i<v.size()/2;i++){
            if(v[i]!=v[v.size()-i-1]) return 0;
        }
        return 1;
    }

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        for(int i=0;i<arr.size();i++){
            if(ispal(arr[i])){
                return to_string(i)+' '+'R';
            }
        }
        for(int j=0;j<arr[0].size();j++){
            vector<int>v1;
            for(int i=0;i<arr.size();i++){
                v1.push_back(arr[i][j]);
            }
            if(ispal(v1)) return to_string(j)+' '+'C';
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends