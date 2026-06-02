class Solution {
public:
    int solve(vector<int>& start1, vector<int>& dur1,
              vector<int>& start2, vector<int>& dur2) {

        int minFinish = INT_MAX;

        // Earliest finish time of first ride type
        for (int i = 0; i < start1.size(); i++) {
            minFinish = min(minFinish, start1[i] + dur1[i]);
        }

        int ans = INT_MAX;

        // Try all second rides
        for (int i = 0; i < start2.size(); i++) {
            int finishTime = max(minFinish, start2[i]) + dur2[i];
            ans = min(ans, finishTime);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int landToWater = solve(
            landStartTime, landDuration,
            waterStartTime, waterDuration
        );

        int waterToLand = solve(
            waterStartTime, waterDuration,
            landStartTime, landDuration
        );

        return min(landToWater, waterToLand);
    }
};