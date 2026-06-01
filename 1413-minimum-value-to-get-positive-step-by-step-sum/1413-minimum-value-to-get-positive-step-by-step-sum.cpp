class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prefixSum=0;
        int mini=0;
        for(int i=0;i<nums.size();i++)
        {   prefixSum+=nums[i];
            mini=min(mini,prefixSum);
           
        }
        return abs(1-mini);
    }
};