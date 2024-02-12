//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long  sum=0;
    long long  m=1e9+7;
    int v,k;
    long long sequence(int n){
        // code here
        int ele=1;
        for(int i=1;i<=n;i++){
            v=1;
            k=i;
            while(k--){
              //  cout<<k+1<<" ";
                v=v%m*ele%m;
                v=v%m;
                ele+=1;
                ele=ele%m;
            }
           // cout<<v<<" ";
            sum+=v;
        }
        return  sum%m;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends