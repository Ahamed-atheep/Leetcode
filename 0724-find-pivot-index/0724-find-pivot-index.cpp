class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0,rightSum;
        int total=0;
        for(int i:nums) total+=i;
        for(int i=0;i<nums.size();i++)
        {
            rightSum=total-leftSum-nums[i];
            if(rightSum==leftSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};