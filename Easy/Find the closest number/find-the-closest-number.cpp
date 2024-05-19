//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int c=0,c1=0;
        int di=abs(arr[0]-k);
        int ele=arr[0];
        for(int i=1;i<n;i++){
            int diff=abs(arr[i]-k);
            if(diff<=di){
                ele=max(ele,arr[i]);
                di=diff;
            }
        }
        return ele;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends