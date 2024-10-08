//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int maxi=INT_MIN,maxi1=INT_MIN;
        int sum=0;
        for(int i=arr.size()-1;i>=0;i--){
            maxi=max(maxi,arr[i]);
        }
        sum+=maxi;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]!=maxi){
                maxi1=max(maxi1,arr[i]);
            }
        }
        return sum+maxi1;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends