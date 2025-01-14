//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &a) {
            int n=a.size();
             int presum=0,rightsum=0;
           int tot=0;
           for(int i=0;i<n;i++){
               tot+=a[i];
           }
          for(int i=0;i<n;i++){
               rightsum=tot-presum-a[i];
               if(presum==rightsum){
                   return i;
               }
               else{
                   presum+=a[i];
               }
            }
            return -1;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends