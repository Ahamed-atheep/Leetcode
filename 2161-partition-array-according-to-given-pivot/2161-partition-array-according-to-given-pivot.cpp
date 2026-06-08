class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        vector<int> mid;
        for(int i:nums)
        {
            if(i<pivot)
                left.push_back(i);
            else if(i==pivot) mid.push_back(i);
            else
            {
                right.push_back(i);
            }
        }
        vector<int> ans;
        ans.insert(ans.end(), left.begin(), left.end());
        ans.insert(ans.end(), mid.begin(), mid.end());
        ans.insert(ans.end(), right.begin(), right.end());
        return ans;        
        
    }
};