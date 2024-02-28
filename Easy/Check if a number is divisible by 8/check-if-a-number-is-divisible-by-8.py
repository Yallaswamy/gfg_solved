#User function Template for python3

class Solution:
    def DivisibleByEight(self,s):
        #code here
        num=0
            
        if(len(s)==1 and int(s[-1])%8==0):
            return 1
        if(len(s)==2 and int(s[-2:])%8==0):
            return 1
        if(len(s))>=3:
            num=s[-3:]
        #print(num)
        if(int(num)%8==0):
            return 1
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        S=input()
        ob=Solution()
        print(ob.DivisibleByEight(S))
# } Driver Code Ends