//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if(N==1){
            if(S>9){
                return "-1";
            }
            else{
                return to_string(S);
            }
        }
        if(N*9<S){
            return "-1";
        }
        if(S==0){
            return "-1";
        }
        string num="";
        for(int i=N;i>=1;i--){
            if(S>9){
                num+="9";
                S-=9;
            }
            else{
                if(S>0){
                    num+=to_string(S);
                    S=0;
                }
                else{
                    num+="0";
                }
            }
        }
        return num;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends