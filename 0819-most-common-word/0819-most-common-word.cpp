class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       unordered_set<string>st(banned.begin(),banned.end());
       unordered_map<string,int>mp;
       for(char &a:paragraph)
       {
        if(isalpha(a))
        {
            a=tolower(a);
        }
        else
        {
            a=' ';
        }
       }
       stringstream ss(paragraph);
       string word;
       while(ss>>word)
       {
            if(st.find(word)==st.end())
            {
                mp[word]++;
            }
       }
       int maxi=0;
       string result;
       for(auto it:mp)
       {
            if(it.second>maxi)
            {
                maxi=it.second;
                result=it.first;
            }
       }
       return result;
    }
};