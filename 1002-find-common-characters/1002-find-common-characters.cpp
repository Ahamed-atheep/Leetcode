class Solution {
public:

    int common_freq(char a, vector<unordered_map<char,int>>& mp)
    {
        int mini = INT_MAX;

        for(int i = 0; i < mp.size(); i++)
        {
            mini = min(mini, mp[i][a]);
        }

        return mini;
    }

    vector<string> commonChars(vector<string>& words) {

        vector<unordered_map<char,int>> mp(words.size());

        for(int i = 0; i < words.size(); i++)
        {
            for(char ch : words[i])
            {
                mp[i][ch]++;
            }
        }

        vector<string> result;

        for(char a = 'a'; a <= 'z'; a++)
        {
            int freq = common_freq(a, mp);

            while(freq--)
            {
                result.push_back(string(1, a));
            }
        }

        return result;
    }
};