class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1) return '0';
        int mid=1<<(n-1);
        if(mid==k)
            return '1';
        else if(k<mid)
            return findKthBit(n-1,k);
        else{
            char bit=findKthBit(n-1,mid*2-k);
        return bit=='1'?'0':'1';
        }
        
    }
};