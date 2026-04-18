class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = {}
        result = []
        
        for word in strs:
            key = "".join(sorted(word))

            if key in anagrams:
                anagrams[key].append(word)
            else:
                anagrams[key] = [word]

        result = list(anagrams.values())
        return result

"""
sort해서 dict의 key 만들고 그 value는 list
list[]에 append
"""