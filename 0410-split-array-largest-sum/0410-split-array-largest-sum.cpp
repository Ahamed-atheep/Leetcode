class Solution {
public:
    int check(vector<int> nums,int max)
    {
        int count=1;
        int curr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(curr+nums[i]<=max)
            {
                curr+=nums[i];
            }
            else
            {
                count++;
                curr=nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int sum=check(nums,mid);
            if(sum<=k)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};