class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        int i=0;
        vector<int>ans(k);
        while(!pq.empty() && i<k)
        {
            int top=pq.top().second;
            pq.pop();
            ans[i]=top;
            i++;
        }
        return ans;
    }
};