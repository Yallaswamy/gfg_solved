//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int binaryexp(long long  a,long long  b){
    const long long mod=1e9+7;
        long long ans = 1;
        while(b>0){
            if((b&1)){
                ans *= a;
                ans %= mod;
            }
            a *= a;
            a %= mod;
            b >>=1;
        }
        return ans;
}
    int nCr(int n, int r){
        // code here
        int num=1;
       const long  long mod=1e9+7; 
        for(int i=n-r+1;i<=n;i++){
            num=(num%(mod)*i%(mod))%mod;
        }
        int inverse=0;
        for(int i=1;i<=r;i++){
            inverse=binaryexp(i,mod-2);
            num=(num%(mod)*inverse%(mod))%mod;
        }
        return num%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends