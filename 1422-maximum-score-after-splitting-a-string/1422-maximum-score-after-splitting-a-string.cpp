class Solution {
public:
    int maxScore(string s) {
       vector<int>zero(s.size());
       vector<int>one(s.size());
       int count=0,count1=0;
       for(int i=0;i<s.size();i++)
       {
            if(s[i]=='0')
            {
                count++;
                zero[i]=count;
            }
            zero[i]=count;
       }
       for(int i=s.size()-1;i>=0;i--)
       {
            if(s[i]=='1')
            {
                count1++;
                one[i]=count1;
            }
            one[i]=count1;
       }
       int left=0,right=1;
       int sum=0;
       int maxi=INT_MIN;
       while(left<s.size()-1 && right<s.size())
       {
        sum=zero[left]+one[right];
        maxi=max(maxi,sum);
        left++,right++;
       }
       return maxi;

    }
};