//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int slove(int n){
        if(n<=2) return n;
      int  a=max(n/2,slove(n/2));
      int  b=max(n/3,slove(n/3));
      int  c=max(n/4,slove(n/4));
        return max(a+b+c,n);
    }
        int maxSum(int n)
        {
            //code here.
            int k=slove(n);
            return k;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends