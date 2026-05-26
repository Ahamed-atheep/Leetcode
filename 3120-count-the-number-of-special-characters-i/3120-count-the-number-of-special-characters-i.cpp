class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lowerMask = 0, upperMask = 0;
        
        for (char c : word) {
            if (c >= 'a' && c <= 'z') {
                lowerMask |= (1 << (c - 'a'));
            } else if (c >= 'A' && c <= 'Z') {
                upperMask |= (1 << (c - 'A'));
            }
        }
        
        int both = lowerMask & upperMask;
        
        int count = __builtin_popcount(both);
        return count;
    }
};
