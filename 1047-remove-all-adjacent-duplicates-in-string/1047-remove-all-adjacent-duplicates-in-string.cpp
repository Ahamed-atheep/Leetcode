class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char i:s)
        {
            if(!st.empty() && i==st.top())
            {
                st.pop();
            }
            else
                st.push(i);
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};