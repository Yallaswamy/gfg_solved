//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int prefixsum[n],suffixsum[n];
        prefixsum[0]=arr[0];
        long long  sum=0;
        for(int i=1;i<n;i++){
            prefixsum[i]=max(arr[i],prefixsum[i-1]);
        }
        suffixsum[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suffixsum[i]=max(arr[i],suffixsum[i+1]);
        }
        for(int i=0;i<n;i++){
            sum+=min(prefixsum[i],suffixsum[i])-arr[i];
        }
        return sum;
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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends