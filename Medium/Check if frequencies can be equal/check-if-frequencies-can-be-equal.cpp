//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    map<char,int>mp;
	    int maxi=0,mini=INT_MAX;
	    int n=s.size();
	    for(int i=0;i<n;i++){
	        mp[s[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        maxi=max(maxi,mp[s[i]]);
	        mini=min(mini,mp[s[i]]);
	    }
	    int m=mp.size();
	    if(m==1) return 1;
	    //cout<<mini<<maxi<<m;
	    if(mini*m==n || ((mini*m)+1)==n || ((maxi*m-1)==n and maxi==2)){
	        return 1;
	    } 

	    return 0;
	    
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends