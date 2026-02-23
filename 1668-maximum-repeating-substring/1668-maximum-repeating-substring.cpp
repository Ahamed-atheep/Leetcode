class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string current=word;
        int cnt=0;
        while(sequence.find(current)!=string ::npos)
        {
            cnt++;
            current+=word;
        }
        return cnt;
    }
};