class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int count=0;
        for(int i:nums)
        {
            total+=i;
        }
        int left=0;
        for(int i=0;i<n;i++)
        {
            left+=nums[i];
            if(nums[i]==0)
            {
                int right=total-left;
                if(right==left) count+=2;
                else if(left==right+1) count+=1;
                else if(left==right-1) count+=1;
            }
        }
        return count;
    }
};