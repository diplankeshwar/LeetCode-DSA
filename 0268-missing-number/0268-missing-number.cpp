class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int Expected_Sum = n * (n + 1)/2;
        int Actual_Sum = 0;

        for(int i=0; i<n ; i++){
            Actual_Sum+= nums[i];

        }
        int Missing_Number = Expected_Sum - Actual_Sum;
        return Missing_Number;
    }
};