class Solution {
public:
    int minFlips(string s) {
        string zero;
        string one;
        string ss=s+s;
        int n=s.size();
        for(int i=0;i<2*n;i++)
        {
            zero+=(i%2==0 ? '0':'1');
            one+=(i%2==0? '1':'0');
        }
        cout<<zero<<" "<<one;
        int count0=0;
        int count1=0;
        int res=n;
        for(int i=0;i<2*n;i++)
        {
            if(ss[i]!=zero[i]) count0++;
            if(ss[i]!=one[i]) count1++;
            if(i>=n)
        {
            if(ss[i-n]!=zero[i-n]) count0--;
        if(ss[i-n]!=one[i-n]) count1--;
        }
        if(i>=n-1)
        {
            res=min({res,count0,count1});
        }

        }
        return res;

    }
};