class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int>prefix(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            prefix[i+1]=prefix[i]+nums[i];
        }
        int i=0;
        int start=max(0,i-nums[i]);
        int sum=0;
        while(start<=i && i<nums.size())
        {
            sum+=(prefix[i+1]-prefix[start]);
            i++;
            if(i<nums.size())
            start=max(0,i-nums[i]);
        }
        return sum;
    }
};