//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	    if(n%k!=0){
	        return 0;
	    }
	    map<string,int>mp;
	    string ans="";
	    ans=s[0];
	    for(int i=1;i<n;i++){
	        if(i%k==0){
	            mp[ans]++;
	            ans="";
	        }
	        ans+=s[i];
	    }
	    mp[ans]++;
	    return mp.size()<=2;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends