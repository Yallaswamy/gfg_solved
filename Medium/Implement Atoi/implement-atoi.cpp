//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int k=0,res=0;
        if(s[0]=='-'){
            k=1;
        }
        else{
            if(s[0]>='0' and s[0]<='9'){
                res=res*10+s[0]-'0';
            }
            else{
                return -1;
            }
        }
        for(int i=1;i<s.size();i++){
            if(s[i]>='0' and s[i]<='9'){
                res=res*10+s[i]-'0';

            }
            else{
                return -1;
            }
        }
        if(k==1) return res*-1;
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends