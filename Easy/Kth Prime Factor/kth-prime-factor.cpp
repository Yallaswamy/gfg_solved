//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPrime(int x){
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    int kthPrime(int n, int k){
        // code here
        vector<int>v,v1;
        for(int i=2;i<=n;i++){
            while(n%i==0){
                v.push_back(i);
                n=n/i;
            }
        }
        for(int i=0;i<v.size();i++){
            if(isPrime(v[i])){
                v1.push_back(v[i]);
            }
        }
        if(v1.size()<k){
            return -1;
        }
        else{
            return v1[k-1];
        }
       
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends