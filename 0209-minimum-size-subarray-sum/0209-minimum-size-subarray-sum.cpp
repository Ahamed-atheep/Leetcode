class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        int mini=INT_MAX;
        int left=0,right=0;
        while(right<n)
        {
            while(left<=right && sum>=target)
            {
                mini=min(mini,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
            if(right<n) sum+=nums[right];
        }
        return mini==INT_MAX?0:mini;
       
    }
};