class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        ans = []
        depth = 0

        for ch in s:
            if ch == '(':
                if depth > 0:       # ( 가 나왔지만 depth가 1이상, 즉 진짜 composition이어야 append
                    ans.append(ch)  
                depth += 1
            else:
                depth -= 1
                if depth > 0:        # ) 가 나왔다. 일단 depth를 줄여보고, 0이면 composition이 아니니 pass
                    ans.append(ch)
        
        ans = ''.join(ans)
        return ans

"""
v1
열린 개수를 세고 0이 되면 거기까지가 composition

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

"""
풀이 후 공부
열린 개수를 세고 0이 되면 -> 접근은 맞다. 그렇지만 그 동안의 과정을 문자열로 다 만들 필요는 없다.
즉 depth가 0일 때를 얻으면 된다는 것
그 때의 idx만 가지고 str를 만들면 됨
"""