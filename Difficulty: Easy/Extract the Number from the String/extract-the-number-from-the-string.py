class Solution:
    def ExtractNumber(self,sentence):
        #code here
        m=-1
        sentence1 =sentence.split()
        for i in sentence1:
            if i.isnumeric():
                if "9" not in str(i):
                    i=int(i)
                    if i>m:
                        m=i
        return m


#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends