//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
         vector<int>v(st.begin(), st.end());
        if(v[v.size()-1]<=0){
            return 1;
        }
       int k=0;
       for(int i=0;i<n;i++){
           if(v[i]>0){
               k=k+1;
             //  cout<<"hii"<<v[i]<<"  ";
               if(k!=v[i]){
                   return k;
               }
           }
       }
       return v[v.size()-1]+1;
    }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
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

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends