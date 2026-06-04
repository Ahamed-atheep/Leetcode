class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> diff(n+1);
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0],r=queries[i][1];
            diff[l]+=1;
            diff[r+1]+=-1;
        }
        int prefix=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=diff[i];
            if(prefix<nums[i]) return false;
        }
        return true;

    }
};