class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() - 1;
        int m = 0;

        while (m < n) {
            int mid = m + (n - m) / 2;

            if (nums[mid] < nums[mid + 1])
                m = mid + 1;
            else
                n = mid;
        }

        return m;
    }
};