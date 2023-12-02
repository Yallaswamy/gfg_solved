//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        vector<int>v;
        for(int i=0;i<N;i++){
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<N;i++){
            if(arr[i]!=v[i]){
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        cout<<ob.isRepresentingBST(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends