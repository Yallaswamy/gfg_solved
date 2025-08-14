class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int n=prices.size();
        int mini=0,maxi=0;
        int i=0,j=n-1,m=0;
        while(i<n){
            mini+=prices[i];
            i++;
            n-=k;
        }
        while(j>=m){
            maxi+=prices[j];
            j--;
            m+=k;
        }
        return {mini,maxi};
        
    }
};