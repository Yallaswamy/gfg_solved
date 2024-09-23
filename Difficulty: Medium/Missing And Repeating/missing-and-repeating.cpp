//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int n=arr.size();
        vector<int>ar(2,0);
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(mp[i]>1)
            {
                ar[0]=i;
            }
            else if(mp[i]==0)
            {
                ar[1]=i;
            }
        }
        return ar;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends