class Solution {
public:
    int gcd(int a,int b)
    {
        while(a>0 && b>0)
            {
                if(a>b) a%=b;
                else b%=a;
            }
        if(a==0) return b;
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        
        vector<int>prefixgcd;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
            {
               maxi=max(maxi,nums[i]);
                prefixgcd.push_back(gcd(nums[i],maxi));
            }
        int left=0,right=nums.size()-1;
        sort(prefixgcd.begin(),prefixgcd.end());
        long long sum=0;
        while(left<right)
            {
                sum+=gcd(prefixgcd[left],prefixgcd[right]);
                left++;
                right--;
            }
        return sum;
        
        
    }
};