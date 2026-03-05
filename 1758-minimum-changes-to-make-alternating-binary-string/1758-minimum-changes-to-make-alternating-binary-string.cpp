class Solution {
public:
    int minOperations(string s) {
        int even=0;
        int odd=0;
        for(int i=0;i<s.size();i++)
        {
            char ex0=(i%2==0)?'0':'1';
            char ex1=(i%2==0)?'1':'0';
            if(ex0!=s[i]) even++;
            if(ex1!=s[i]) odd++;
        }
        return min(even,odd);
    }
};