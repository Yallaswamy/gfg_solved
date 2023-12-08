#User function Template for python3



class Solution:
    
    def minNumber(self, arr,n):
        # code here
        def prime(n):
            if n>1:
                for i in range(2,int(n**(0.5))+1):
                    if n%i==0:
                        return 0
                return 1
        sum1=0
        for i in range(0,n):
            sum1=sum1+arr[i]
        c=0
        while(1):
            if prime(sum1):
                return c
            else:
                c+=1
                sum1+=1
                



#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
 #    l=list(map(int,input().split()))
 #    n=l[0]
 #    m=l[1]
    a=list(map(int,input().split()))
   # k = int(input())
  #  b = list(map(int, input().split()))
    ob = Solution()
    ans=ob.minNumber(a,n)
    print(ans)

# } Driver Code Ends