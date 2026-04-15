class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mini=INT_MAX;
        int n=words.size();
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            {
                int dist=abs(i-startIndex);
                dist=min(dist,n-dist);
                mini=min(mini,dist);
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};