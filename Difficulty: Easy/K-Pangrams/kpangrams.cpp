//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int l=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!=' '){
                l++;
            }
        }
        if(l<26) return 0;
        vector<int>arr(27,0);
        for(int i=0;i<str.size();i++){
            if(str[i]!=' '){
                arr[str[i]-'a'+1]++;
            }
        }
        int c=0;
        for(int i=1;i<27;i++){
            if(arr[i]==0){
                c+=1;
            }
        }
        if(c<=k) return 1;
        return 0;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends