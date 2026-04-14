class Solution {
public:
    bool isdigit(char ch)
    {
        if(ch-'0'>=0 && ch-'0'<=9) return 1;
        return 0;
    }
    string clearDigits(string s) {
        stack<char>st;
        for(char i:s)
        {
            if(isdigit(i))
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