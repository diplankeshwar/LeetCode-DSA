class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int> result;
        vector<int> check(n + 1, 0);

        for (int x : nums) {
            check[x]++;
        }
        for (int i = 1; i <= n; i++) {
            if (check[i] == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};