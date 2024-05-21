//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        priority_queue<int>s;
        priority_queue<int>l;
        for(int i=0;i<n;i++){
            if(arr[i]==x) continue;
            else if(arr[i]<x) s.push(arr[i]);
            else l.push(-1*arr[i]);
        }
        vector<int>res;
        while(!s.empty() and !l.empty() and k>0){
            int fir=s.top();
            int sec=l.top();
            sec=sec*-1;
            if(abs(x-fir)<abs(x-sec)){
                res.push_back(fir);
                s.pop();
                k--;
            }
            else{
                res.push_back(sec);
                l.pop();
                k--;
            }
        }
        if(k>0 and !l.empty() and s.empty()){
            while(k--){
                res.push_back(-1*l.top());
                l.pop();
            }
        }
        if(k>0 and l.empty() and !s.empty()){
            while(k--){
                res.push_back(s.top());
                s.pop();
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends