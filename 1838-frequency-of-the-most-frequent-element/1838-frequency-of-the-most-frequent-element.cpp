class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long sum=0;
        int left=0;
        int maxi=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while((((long long)(i-left+1)*nums[i])-sum)>k && (left<nums.size()))
            {
                sum-=nums[left];
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};