class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int subsets=1<<nums.size();
        set<vector<int>>st;
        vector<vector<int>>ans;
        for(int num=0;num<subsets;num++)
        {
            vector<int>list;
            for(int i=0;i<nums.size();i++)
            {
                if(num & (1<<i))
                {
                    list.push_back(nums[i]);
                }
            }
            st.insert(list);
        }
        for(auto i:st)
        {
            ans.push_back(i);
        }
        return ans;

    }
};