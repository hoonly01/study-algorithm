class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        comp = ""
        ans = ""
        cnt = 0
        
        for i in range(0, len(s)):
            if(s[i] == '('):
                cnt += 1
                comp += s[i]
            else:
                cnt -= 1
                comp += s[i]
            
            if(cnt == 0):
                ans += comp[1:len(comp)-1]
                comp = ""
        return ans

"""
열린 개수를 세고 0이 되면 거기까지가 composition
"""