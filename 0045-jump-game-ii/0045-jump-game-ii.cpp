class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        for(int i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=n-1)
            {
                dp[i]=1;
                continue;
            }
            int mini=INT_MAX;
            for(int j=i+1;j<=i+nums[i];j++)
            {
                if(dp[j]>0)
                {
                    mini=min(dp[j],mini);
                }
            }
            if(mini!=INT_MAX)
                dp[i]=mini+1;
        }
        return dp[0];
    }
};