class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high;
        for(int i:nums)
        {
            high=max(high,i);
        }
        int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long sum=0;
            for(int i:nums)
            {
                sum+=(i+mid-1)/mid;
            }
            if(sum<=threshold)
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