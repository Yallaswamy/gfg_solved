//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int dp[17][17];
    int slove(int i,int j,int r,int c){
        if(i<0 || j<0 || i>=r || j>=c) return 0;
        if(i==r-1 and j==c-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
       int down=slove(i,j+1,r,c);
        int right=slove(i+1,j,r,c);
        return dp[i][j]=down+right;
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        memset(dp,-1,sizeof(dp));
        int k=slove(0,0,a,b);
        return k;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends