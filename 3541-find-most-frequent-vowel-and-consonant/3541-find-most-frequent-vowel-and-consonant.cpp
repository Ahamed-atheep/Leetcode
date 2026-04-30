class Solution {
public:
    bool check(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            return 1;
        }
        return 0;
    }
    int maxFreqSum(string s) {
        int maxv=0,maxc=0;
        unordered_map<char,int>vowel,cons;
        for(char i:s)
        {
            if(check(i))
            {
                vowel[i]++;
            }
            else
            {
                cons[i]++;
            }
        }
        for(char i:s)
        {
            if(check(i))
            {
                maxv=max(maxv,vowel[i]);
            }
            else
            {
                maxc=max(maxc,cons[i]);
            }
        }
        return maxv+maxc;
    }
};