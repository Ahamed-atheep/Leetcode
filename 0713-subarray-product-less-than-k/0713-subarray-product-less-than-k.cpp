class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int pro=1;
        int start=0;
        int count=0;
        for(int end=0;end<nums.size();end++)
        {
            pro*=nums[end];
            while(pro>=k)
            {
                pro/=nums[start];
                start++;
            }
            count+=(end-start+1);
        }
        return count;
    }
};