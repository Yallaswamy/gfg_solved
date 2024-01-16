//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        vector<int>v;
        int ans[100]={0};
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(ans[arr[i]]>=1){
                v.push_back(arr[i]);
                ans[arr[i]]=0;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}

// } Driver Code Ends