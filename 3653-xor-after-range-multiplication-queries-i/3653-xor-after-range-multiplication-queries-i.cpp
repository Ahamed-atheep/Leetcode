class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int mod=1e9+7;
        for(auto it:queries)
        {
            int idx=it[0];
            while(idx<=it[1])
            {
                nums[idx]=(1LL*nums[idx]*it[3])%mod;
                idx+=it[2];
            }
        }
        int xor1=0;
        for(int i:nums)
        {
            xor1=xor1^i;
        }
        return xor1;
    }
};