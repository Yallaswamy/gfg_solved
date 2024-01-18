//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int prime(int n){
	    if(n<=1) return 0;
	    for(int i=2;i*i<=n;i++){
	        if(n%i==0){
	            return 0;
	        }
	    }
	    return 1;
	}
	vector<int> AllMersennePrimeNo(int N)
	{
	    // Code here
	    vector<int>ans;
	    int x=1,c=1;
	    while(x<N){
	        x=1<<c;
	        
	        c+=1;
	        if(prime(x-1) && x-1<=N){
	            ans.push_back(x-1);
	        }
	    }
	    return ans;
	        
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<int> ans = ob.AllMersennePrimeNo(n);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}
	return 0;
}
// } Driver Code Ends