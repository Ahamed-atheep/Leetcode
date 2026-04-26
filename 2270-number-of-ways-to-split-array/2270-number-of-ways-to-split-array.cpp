class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        long long total=0;
        for(int i:nums) total+=i;
        long long leftSum=0;
        for(int i=0;i<n-1;i++)
        {
            leftSum+=nums[i];
            long long rightSum=total-leftSum;
            if(leftSum>=rightSum)
            {
                count++;
            }
        }
        return count;
    }
};