//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int N){
        // code here
        long maxi=INT_MIN,sum=0,ans=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        maxi=sum;
        int j=0;
        for(int i=k;i<N;i++){
            sum+=arr[i]-arr[j];
            maxi=max(maxi,sum);
            j+=1;
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends