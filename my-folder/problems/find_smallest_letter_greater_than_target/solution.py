class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        for i in range(len(letters)):
            count = 0
            if (ord(letters[i])>ord(target)):
                return letters[i]
                count = 1
        if count == 0:
            return letters[0]