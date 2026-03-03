class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>counter1(26,0);
        for(char i:s)
        {
            counter1[i-'a']+=1;
        }
        for(char i:t)
        {
            counter1[i-'a']--;
        }
        for(int i:counter1)
        {
            if(i!=0)
                return 0;
        }
        return 1;
    }
};