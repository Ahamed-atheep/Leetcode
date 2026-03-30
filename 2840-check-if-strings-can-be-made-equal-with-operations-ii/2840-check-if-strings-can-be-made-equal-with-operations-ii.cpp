class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<int,int>odd1,even1,odd2,even2;
        for(int i=0;i<s1.size();i++)
        {
            if(i%2==0) even1[s1[i]]++;
            else odd1[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++)
        {
            if(i%2==0) even2[s2[i]]++;
            else odd2[s2[i]]++;
        }
        return odd1==odd2 && even1==even2;
    }
};