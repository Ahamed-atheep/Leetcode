class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        vector<long long >prefix(n),suffix(n);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            prefix[i]+=sum;
        }
        for(int i=0;i<n;i++)
        {
            suffix[i]+=sum;
            sum-=nums[i];
        }
        for(int i=1;i<n;i++)
        {
            if(prefix[i-1]>=suffix[i])
            {
                count++;
            }
        }
        return count;
    }
};