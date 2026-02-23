class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        string current="";
        for(int i=0;i<s.size();i++)
        {
            current+=s[i];
            if(current.size()==k)
            {
                st.insert(current);
                current.erase(0,1);
            }
        }
        if(st.size()==1<<k) return 1;
        return 0;
    }
};