class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        kVowels = 'aeiou'
        prefix = [0] * (len(words)+1)

        for i, word in enumerate(words):
            prefix[i+1] = prefix[i] + (word[0] in kVowels and word[-1] in kVowels)
        ans = []

        for q in queries:
            s = q[0]
            e = q[1]
            ans.append(prefix[e+1]-prefix[s])
        return ans