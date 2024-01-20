//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 
    int countPrimes(int L, int R) {
        vector<int>primes(R+1,1);
        primes[0]=primes[1]=0;
        for(int i=2;i*i<=R;i++){
          if(primes[i]==1){
              for(int j=i*i;j<=R;j+=i){
                  primes[j]=0;
              }
          }
      }
        int c=0;
      // code here
      for(int i=L;i<=R;i++){
          if(primes[i]==1){
              c+=1;
              //cout<<i<<" ";
          }
      }
      return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends