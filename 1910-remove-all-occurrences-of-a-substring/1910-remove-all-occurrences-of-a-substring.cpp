class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int n=s.size();
        int partl=part.size();
        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
            while(st.size()>=partl && check(st,part))
            {
                for(int i=partl-1;i>=0;i--)
                {
                    st.pop();
                }
            }
        }
        string result="";
        while(!st.empty())
        {
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
    bool check(stack<char>st,string part)
    {
        for(int i=part.size()-1;i>=0;i--)
        {
            if(st.top()!=part[i])
            {
                return 0;
            }
            st.pop();
        }
        return 1;
    }
};