#User function Template for python3
class Solution:

    def print2largest(self,arr, n):
        # code here
        k=0
        arr=set(arr)
        arr=sorted(arr)
        if(len(arr)>1):
            return arr[len(arr)-2]
        else:
            return -1





#{ 
 # Driver Code Starts
# Initial Template for Python 3
if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.print2largest(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends