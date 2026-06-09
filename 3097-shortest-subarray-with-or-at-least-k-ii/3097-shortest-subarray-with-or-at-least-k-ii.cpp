class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int oR=0;
        int n=nums.size();
        int shortest=n+1;
        int start=0;
        vector<int> bits(32);
        for(int end=0;end<n;end++)
        {
            for(int b=0;b<32;b++)
            {
                if(nums[end] & (1<<b))
                {
                    bits[b]++;
                    oR|=(1<<b);
                }
            }   
            while(oR>=k && start<=end)
            {
                shortest=min(shortest,end-start+1);
                for(int b=0;b<32;b++)
                {
                    if(nums[start] & (1<<b))
                    {
                        bits[b]--;
                        if(bits[b]==0)
                        {
                            oR &=~(1<<b);
                        }
                    }
                }
                start++;
            }
        }
        return shortest==n+1?-1:shortest;

    }
};