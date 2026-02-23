class Solution {
public:
    int smallestNumber(int n) {
        int count=0;
        while(n>0)
        {
            count++;
            n>>=1;
        }
        int k=1<<count;
        return k-1;
    }
};