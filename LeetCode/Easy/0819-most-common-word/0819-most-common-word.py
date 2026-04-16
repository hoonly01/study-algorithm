class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words = re.findall('[a-zA-Z]+', paragraph) # words = []

        word_count = {}

        for word in words:
            word = word.lower()
            if word in banned:
                continue

            if word in word_count:
                word_count[word] += 1
            else:
                word_count[word] = 1

        return max(word_count, key=word_count.get)