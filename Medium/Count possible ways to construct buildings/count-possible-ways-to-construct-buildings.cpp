//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    int a=1,b=1,temp=0;
	    long  mod=1e9+7;
	    for(int i=0;i<N;i++){
	        temp=(a+b)%(mod);
	        a=b;
	        b=temp;
	    }
	    
	    return (((temp)%(mod))*((temp)%(mod)))%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends