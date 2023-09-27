//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int save_gotham(int arr[], int n);



int main() {
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout << save_gotham(arr, n) << endl;
    }
    
	return 0;
}
// } Driver Code Ends


int save_gotham(int arr[], int n)
{
    // Complete the function
    stack<int>st;
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            st.push(arr[i]);
        }
        else if(!st.empty() && arr[i]<st.top()){
            v.push_back(st.top());
            st.push(arr[i]);
        }
        else if(!st.empty() && st.top()<=arr[i]){
            while(!st.empty() && arr[i]>=st.top()){
                    st.pop();
            }
            if(!st.empty()){
                v.push_back(st.top());
            }
            st.push(arr[i]);
        }
    }
    long   sum=0;
        for(int i=0;i<v.size();i++){
           sum+=v[i];
        }
            sum = sum%1000000001;
    return (int)sum;
    
    
}