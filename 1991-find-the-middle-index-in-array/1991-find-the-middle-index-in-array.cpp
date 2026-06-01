class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rightSum;
        int total=0;
        for(int i:nums) total+=i;
        int leftSum=0;
        for(int i=0;i<nums.size();i++)
        {
            rightSum=total-leftSum-nums[i];
            if(rightSum==leftSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};