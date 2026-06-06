class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total=0;
        vector<int> ans(nums.size());
        for(int i:nums)
        {
            total+=i;
        }
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            int right=total-nums[i]-left;
            ans[i]=abs(left-right);
            left+=nums[i];
        }
        return ans;
    }
};