//{ Driver Code Starts
// Program to check if linked list is empty or not
#include<iostream>
using namespace std;
const long long unsigned int MOD = 1000000007;

/* Link list Node */
struct Node
{
    bool data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


// } Driver Code Ends
/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

#define ll long long unsigned int

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list
        ll m=1e9+7;
        ll  poW(ll a, ll b)
        {
            ll ans=1;
            while(b!=0)
            {
                if(b&1)
                {
                    b-=1;
                    ans=(ans*a)%m;
                    
                }
                else
                {
                    b=b>>1;
                    a=(a*a)%m;
                }
            }
            return ans%m;
        }
        ll fun(ll ans,ll c,ll num){
            
            ans=(ans+(num*(poW(2,c))%m)%m)%m;
            return ans%m; 
        }
     
        ll decimalValue(Node *head)
        {
          int c=0;
          Node *head1=head;
          while(head){
              c+=1;
              head=head->next;
          }
          c=c-1;
          ll ans=0;
          ll num=0;
          while(head1){
              num=head1->data;
              ans=fun(ans,c,num);
              c=c-1;
              head1=head1->next;
          }
          
          return ans%m;
        }
};




//{ Driver Code Starts.

void append(struct Node** head_ref, struct Node **tail_ref, bool new_data)
{

    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isEmpty(struct Node *head);

/* Driver program to test above function*/
int main()
{
    bool l;
    int i, n, T;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        Solution obj;
        cout << obj.decimalValue(head) << endl;
    }
    return 0;
}
// } Driver Code Ends