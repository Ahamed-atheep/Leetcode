class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size()<3) return -1;
        unordered_map<int,vector<int>>mp;
        int mini=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp)
        {
            auto &indices = it.second;
            if (indices.size() >= 3) {
                sort(indices.begin(), indices.end());
                for (int i = 0; i + 2 < indices.size(); i++) {
                    int dist = 2 * (indices[i+2] - indices[i]);
                    mini = min(mini, dist);
                }
            }
        
        }
        return mini==INT_MAX?-1:mini;
    }
};