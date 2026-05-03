class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        ans = []
        for word in words:
            for other in words:
                if word == other:
                    continue
                if len(word) > len(other):
                    continue
                
                if word in other:
                    ans.append(word)
                    break
        return ans


"""
부르트포스
len 더 짧으면 pass
"""