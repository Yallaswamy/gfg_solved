//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not
    
    bool checkPangram (string s) {
    // your code here
        vector<int>v(26,0);
        char x=' ';
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' and s[i]<='Z'){
                x=tolower(s[i]);
                v[x-'a']++;
            }
            if(s[i]>='a' and s[i]<='z'){
                v[s[i]-'a']++;
            }
        }
        for(int i=0;i<v.size();i++){
           if(v[i]==0){
               return 0;
           }
        }
        return 1;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends