//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  string slove(string str1,string str2){
      int n=str1.size();
      string ans="";
      for(int i=0;i<n;i++){
          if(str1[i]==str2[i]){
              ans+=str1[i];
          }
          else return ans;
      }
  }

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string str=arr[0];
        for(int i=0;i<arr.size();i++){
            str=slove(arr[i],str);
           
        }
    
        return str==""?"-1":str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends