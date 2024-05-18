//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int ans=-1,ans1=-1;
        if(a[0]<a[1]){
            for(int i=1;i<a.size();i++){
                if(a[i-1]<a[i]){
                    ans=a[i];
                }
                else{
                    ans1=a[i];
                    break;
                }
            }
        }
        else{
            for(int i=1;i<a.size();i++){
                if(a[i-1]>a[i]){
                    ans=a[i];
                }
                else{
                    ans1=a[i];
                    break;
                }
            }
        }
      //  cout<<ans<<ans1;
        return max(ans,ans1);
        
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends