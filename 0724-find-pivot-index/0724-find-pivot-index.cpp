class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n),suffixSum(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            prefixSum[i]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=nums[i];
            suffixSum[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            if(prefixSum[i]==suffixSum[i])
                return i;
        }
        return -1;
    }
};