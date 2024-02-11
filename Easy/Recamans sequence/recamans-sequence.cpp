//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> arr;
    map<int,int>mp;
    vector<int> recamanSequence(int n){
        if(n == 0)
        {
            arr.push_back(0);
            return arr;
        }
        recamanSequence(n-1);
        if((arr[n-1] - n > 0) and mp.find(arr[n-1]-n) == mp.end()){
            arr.push_back(arr[n-1] -n);
            mp[arr[n-1]-n]++;
        }
        else{
            arr.push_back(arr[n-1]+ n);
            mp[arr[n-1]+n]++;
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends