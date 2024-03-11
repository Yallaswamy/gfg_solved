//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool visempty(vector<int>&vis){
        for(int i=0;i<vis.size();i++){
            if(vis[i]){
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	     vector<int>vis(26,0);
	    for(int i=0;i<pat.size();i++){
	        vis[pat[i]-'a']++;
	    }
	    int i=0,j=0,ans=0;
	    int k=pat.size();
	    while(j<txt.size()){
	       vis[txt[j]-'a']--;
	        if(j-i+1==k){
	            if(visempty(vis)){
	                ans+=1;
	            }
	            vis[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends