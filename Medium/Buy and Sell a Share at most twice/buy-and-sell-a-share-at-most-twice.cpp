//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        int dp[100001][4];
        int solve(int ind,int len,vector<int>&price){
            if(ind>=price.size() or len==4 ) return 0;
            int pick=0,nonpick=0;
            if(dp[ind][len]!=-1) return dp[ind][len];
            if(len%2==0){
                 pick=-price[ind]+solve(ind+1,len+1,price);
            }
            else{
                 pick=price[ind]+solve(ind+1,len+1,price);
            }
            nonpick=solve(ind+1,len,price);
            return dp[ind][len]=max(pick,nonpick);
        }
        int maxProfit(vector<int>&price){
            //Write your code here..
            memset(dp,-1,sizeof(dp));
            int ind=0,len=0;
            int k=solve(ind,len,price);
            return k;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends