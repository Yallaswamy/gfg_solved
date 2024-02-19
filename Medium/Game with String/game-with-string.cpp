//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<pair<int,char>>pq;
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        while(k){
            char t=pq.top().second;
            int ele=pq.top().first;
            pq.pop();
            ele=ele-1;
            pq.push({ele,t});
            k--;
        }
        int sum=0;
        while(!pq.empty()){
            int ele=pq.top().first;
            sum+=(ele*ele);
            pq.pop();
        }
        return sum;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends