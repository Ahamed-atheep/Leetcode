class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
        current=word
        count=0
        while(current in sequence):
            count+=1
            current+=word
        return count