//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int slove(int i,int m,int n){
        if(n==0) return 1;
        if(i>m) return 0;
        int p=0,np=0;
        p=slove(i*2,m,n-1);
        np=slove(i+1,m,n);
        return p+np;
        
    }
    int numberSequence(int m, int n){
        // code here
        int i=1;
        slove(i,m,n);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends