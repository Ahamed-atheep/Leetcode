class Solution {
public:
    bool checkOnesSegment(string s) {
        char ch='0';
        int count=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                ch='1';
                count++;
            } 
        }
        if(count>1)
        {
            return 0;
        }
        return 1;
    }
};