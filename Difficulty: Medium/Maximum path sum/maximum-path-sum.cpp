/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  int slove(Node* root,int &maxi){
      if(root==NULL){
          return 0;
      }
      int light=max(0,slove(root->left,maxi));
      int right=max(0,slove(root->right,maxi));
      int cur=root->data+light+right;
      maxi=max(cur,maxi);
      return root->data+max(light,right);
  }
    int findMaxSum(Node *root) {
        // code here
        int maxi=INT_MIN;
        slove(root,maxi);
        return maxi;
    }
};