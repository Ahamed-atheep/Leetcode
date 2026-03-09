class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        while(left!=right)
        {
            left/=2;
            right/=2;
            ans++;
        }
        return left<<ans;
    }
};