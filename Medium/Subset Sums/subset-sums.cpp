//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(int ind,int sum,vector<int>&arr,vector<int>&v){
        if(ind==arr.size()){
            v.push_back(sum);
            return ;
        }
        solve(ind+1,sum+arr[ind],arr,v);
       // sum-=arr[ind];
        solve(ind+1,sum,arr,v);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>v;
        int sum=0,ind=0;
        solve(ind,sum,arr,v);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends