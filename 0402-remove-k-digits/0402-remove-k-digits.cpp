class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        int sizes=num.size()-k;
       stack<int>st;
       for(int i=0;i<num.size();i++)
       {
        int nums=num[i]-'0';
        while(!st.empty() && st.top()>nums && k>0)
        {
            st.pop();
            k--;
        }
        st.push(nums);
       }
       while(k>0 && !st.empty())
       {
        k--;
        st.pop();
       }
       string s="";
       while(!st.empty())
       {
        s+=to_string(st.top());
        st.pop();
       }
       reverse(s.begin(),s.end());
       int i=0;
       while(i<num.size() && s[i]=='0') i++;
       s=s.substr(i);
       return s.empty()?"0":s;
    }
};