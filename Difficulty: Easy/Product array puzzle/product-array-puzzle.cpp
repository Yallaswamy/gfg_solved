//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // code here
        vector<int>ans;
        int pro=1;
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) pro*=nums[i];
            else z+=1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 and z==1) ans.push_back(pro);
            else if(z==0) ans.push_back(pro/nums[i]);
            else ans.push_back(0);
        }
        return ans;
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
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends