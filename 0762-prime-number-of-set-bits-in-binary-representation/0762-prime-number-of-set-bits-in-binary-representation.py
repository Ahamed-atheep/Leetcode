class Solution:
    def countPrimeSetBits(self, left: int, right: int) -> int:
        anscnt=0
        lst=[2,3,5,7,11,13,17,19,23,29,31]
        while left<=right:
            n=left
            cnt=0
            while n>1:
                cnt+=(n&1)
                n>>=1
            if(n==1): 
                cnt+=1
            if(cnt in lst):
                 anscnt+=1
            left+=1
        return anscnt

