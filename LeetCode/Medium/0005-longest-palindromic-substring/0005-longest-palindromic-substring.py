class Solution:
    def longestPalindrome(self, s: str) -> str:
        l, max_len = 0, 0
        r = len(s)
        longest = ""
        
        while(l + max_len <= r):
            while(l + max_len <= r):
                candidate = s[l:l+max_len+1]
                reverse_candidate = candidate[::-1]
                
                if(candidate == reverse_candidate):     # 팰린드롬일 때
                    max_len += 1
                    longest = candidate
                else:                                   # 아닐 때
                    max_len += 1
            max_len = len(longest)
            l += 1 
            
        return longest
            
"""
첫글자부터 시작해서 팰린드롬이면 한글자 더 추가해서 검사
더 이상 안될 때 그 직전까지까 max 팰린드롬
str slicing으로 풀이 -> l,r,len으로 [::] 관리
"""