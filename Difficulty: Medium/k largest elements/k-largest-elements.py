#User function Template for python3
class Solution:

    def kLargest(self,arr, k):
        # code her
        arr=sorted(arr)
        arr=arr[::-1]
        a=[]
        c=0
        for i in range(0,k):
            a.append(arr[i])
        return a
            





#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        k = int(input().strip())
        ob = Solution()
        ans = ob.kLargest(arr, k)

        print(" ".join(map(str, ans)))
        tc -= 1
        print("~")

# } Driver Code Ends