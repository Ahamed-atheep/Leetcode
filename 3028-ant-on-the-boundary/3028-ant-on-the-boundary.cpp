class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int total=0;
        int count=0;
        for(int i:nums)
        {
            total+=i;
            if(total==0) count++;
        }
        return count!=0?count:0;
    }
};