class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int anscnt=0;
        unordered_set<int>st={2,3,5,7,11,13,17,19,23,29,31};
        for(int i=left;i<=right;i++)
        {
            int cnt=0;
            int n=i;
            while(n>1)
            {
                cnt+=(n&1);
                n>>=1;
            }
            if(n==1) cnt++;
            if(st.find(cnt)!=st.end()) anscnt++;
        }
        return anscnt;
    }
};