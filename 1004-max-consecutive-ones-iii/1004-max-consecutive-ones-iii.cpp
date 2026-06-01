class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0;
        int zeroFlipped=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zeroFlipped++;
            }
            while(zeroFlipped>k)
            {
                if(nums[start]==0) zeroFlipped--;
                start++;
            }
            maxi=max(maxi,i-start+1);
        }
        return maxi;
    }
};