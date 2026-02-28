class Solution {
public:
    string repeat(char s,int t)
    {
        string result;
        for(int i=0;i<t;i++)
        {
            result+=s;
        }
        return result;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char i:s)
        {
            mp[i]++;
        }
        vector<pair<char,int>>store;
        for(auto it:mp)
        {
            store.push_back({it.first,it.second});
        }
        sort(store.begin(),store.end(),[](auto a,auto b)
        {
            return a.second>b.second;
        }
        );
        string ans;
        for(auto it:store)
        {
            ans+=repeat(it.first,it.second);
        }
        return ans;
    }
};