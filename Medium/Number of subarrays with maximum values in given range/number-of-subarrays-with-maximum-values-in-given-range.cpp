//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        long c=0,rc=0,lc=0;
        for(int i=0;i<n;i++){
            if(a[i]<L){
                c+=1;
                lc+=c;
            }
            else{
                c=0;
            }
        }
        c=0;
        for(int i=0;i<n;i++){
            if(a[i]<=R){
                c+=1;
                rc+=c;
            }
            else{
                c=0;
            }
        }
        long ans=abs(rc-lc);
        return ans;
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends