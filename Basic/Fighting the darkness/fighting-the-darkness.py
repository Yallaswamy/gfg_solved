
class Solution:
    def maxDays(self, arr, n):
        # code here
        return max(arr)


#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    t=int(input())
    for _ in range(0,t):
        n=int(input())
        arr = list(map(int,input().split()))
        ob = Solution()
        print(ob.maxDays(arr,n))
# } Driver Code Ends