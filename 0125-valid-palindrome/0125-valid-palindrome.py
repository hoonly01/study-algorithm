class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 = ""
        s = s.lower()
        for i in s:
            if(i.isalnum()):
                s1 = s1 + i
        s2 = s1[::-1]
        return s1 == s2