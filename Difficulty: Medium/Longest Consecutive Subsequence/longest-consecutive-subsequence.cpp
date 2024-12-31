//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        map<int, int> mp;
        int count = 1;
        for (auto it: arr){
            mp[it] = 1;
        }
        int last = mp.begin()->first;
        int maxi = 1;
        for (auto it: mp){
            if (it.first - 1 == last){
                count++;
                maxi = max(maxi, count);
            }
            else if (it.first == last){
                continue;
            }
            else{
                count = 1;
            }
            last = it.first;
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends