class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        if len(words) == 1:
            return True
        if len(words) == 0:
            return False
        word = "".join(words)
        for c in set(word):
            if word.count(c) % len(words) != 0:
                return False
        return True