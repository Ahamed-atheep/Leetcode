class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            for (int j = 0; j < waterStartTime.size(); j++) {
                
                int finishLand = landStartTime[i] + landDuration[i];
                int startWater = max(finishLand, waterStartTime[j]);
                ans = min(ans, startWater + waterDuration[j]);

                int finishWater = waterStartTime[j] + waterDuration[j];
                int startLand = max(finishWater, landStartTime[i]);
                ans = min(ans, startLand + landDuration[i]);
            }
        }
        return ans;
    }
};
