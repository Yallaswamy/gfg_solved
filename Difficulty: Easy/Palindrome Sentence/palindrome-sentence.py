class Solution:
	def isPalinSent(self, s):
		# code here
		s=s.lower()
		ans=""

		for i in range(len(s)):
		    if s[i].isalnum():
		        ans+=s[i]
		        
        if ans==ans[::-1]:
		     return 1
		else:
		     return 0