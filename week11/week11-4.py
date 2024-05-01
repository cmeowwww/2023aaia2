class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):
            if word[i]==ch:

                returna word[i::-1]+word[i+1:]

        return word