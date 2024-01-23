//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int ind,int sum,vector<int>&arr,vector<int>&ds,vector<vector<int>>&v){
        if(ind==arr.size()){
            if(sum==0){
                v.push_back(ds);
            }
            return ;
        }
        if(sum==0){
            v.push_back(ds);
            return ;
        }
        if(sum<arr[ind])return;
        if(sum>=arr[ind]){
            ds.push_back(arr[ind]);
            solve(ind,sum-arr[ind],arr,ds,v);
            ds.pop_back();
        }
        solve(ind+1,sum,arr,ds,v);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
       
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        vector<vector<int>>v;
        vector<int>ds;
        int ind=0;
        solve(ind,B,A,ds,v);
        //v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends