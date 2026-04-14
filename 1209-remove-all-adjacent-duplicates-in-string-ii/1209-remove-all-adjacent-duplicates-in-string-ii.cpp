class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(char c:s){
        if(!st.empty() && st.top().first == c)
        {
            st.top().second++;
        }
        else
        {
            st.push({c, 1});
        }
        if(!st.empty() && st.top().second == k)
        {
            st.pop();
        }
        }
        string res="";
        while(!st.empty())
        {
            auto top = st.top();
            st.pop();
            res.append(top.second, top.first);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};