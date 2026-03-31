class Solution {
public:
    int firstMatchingIndex(string s) {
        int left=0,right=s.size()-1;
        while(left<=right)
            {
                if(s[left]==s[right])
                {
                    return min(left,right);
                }
                left++;
                right--;
            }
        return -1;
    }
};