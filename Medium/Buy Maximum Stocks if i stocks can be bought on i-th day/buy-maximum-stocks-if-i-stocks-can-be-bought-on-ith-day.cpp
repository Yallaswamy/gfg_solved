//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({price[i],i+1});
        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i].first*v[i].second<=k){
                ans+=v[i].second;
                k-=v[i].first*v[i].second;
            }
            else{
                int m=1;
                while(1){
                    if(v[i].first*m>k){
                         ans+=m-1;
                         break;
                    }
                    else{
                        m+=1;
                    }
                   
                }
                return ans;
            }
        }
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends