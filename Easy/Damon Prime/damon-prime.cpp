//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int prime(int n){
      if (n<1){
          return 0;
      }
      for(int i=2;i*i<=n;i++){
          if(n%i==0){
              return 0;
          }
      }
      return 1;
  }
    string damonPrime(int N){
        // code here
        if(prime(N-1) and prime(N+1)){
            return "Yes";
        }
        else return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.damonPrime(N) << endl;
    }
    return 0;
}

// } Driver Code Ends