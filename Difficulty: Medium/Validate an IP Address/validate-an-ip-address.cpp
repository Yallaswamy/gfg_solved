//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        if(str.size()>15) return 0;
        if(str.size()<7) return 0;
        if(str[0]=='.') return 0;
        for(int i=1;i<str.size();i++){
            if(str[i-1]=='.' and str[i]=='.') return 0;
        }
        int c=0;
        string num="";
        for(int i=0;i<str.size();i++){
            if(str[i]!='.'){
                num+=str[i];
            }
            else{
                int n=stoi(num);
                if(num[0]=='0' and num.size()>1) return 0;
                if(n<0 or n>255) return 0;
                num="";
                c+=1;
            }
        }
        if(stoi(num)>=0 and stoi(num)<=255) c+=1;
        if(c==4) return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends