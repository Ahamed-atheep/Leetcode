class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        long long prefix=0,suffix=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
        }
        for(int i=n-1;i>=1;i--)
        {
            suffix+=nums[i];
            prefix-=nums[i];
            cout<<prefix<<" "<<suffix<<" ";
            if(prefix>=suffix)
            {
                count++;
            }
        }
        return count;
    }
};