class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n=logs.size();
        vector<int>birth,death;
        int year=0;
        int population=0;
        int maxi=0;
        for(auto i:logs)
        {
            birth.push_back(i[0]);
            death.push_back(i[1]);
        }
        int left=0,right=0;
        sort(birth.begin(),birth.end());
        sort(death.begin(),death.end());
        while(left <n)
        {
            if(birth[left]<death[right])
            {
                population++;
                if(maxi<population)
                {
                    maxi=population;
                    year=birth[left];
                }
                left++;
            }
            else
            {
                population--;
                right++;
            }
        }
        return year;
    }
};