class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>array(101);
        for(auto i:logs)
        {
            array[i[0]%1950]+=1;
            array[i[1]%1950]-=1;
        }
        int maxi=0;
        int sum=0;
        int year;
        for(int i=0;i<101;i++)
        {
            sum+=array[i];
            if(maxi<sum)
            {
                maxi=sum;
                year=1950+i;
            }
        }
        return year;
    }
};