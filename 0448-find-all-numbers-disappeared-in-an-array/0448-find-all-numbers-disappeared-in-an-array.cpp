class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int> result;
        unordered_set<int> freq;
        
        
        for (int x : nums) {
            freq.insert(x);
        }
        for (int i=1; i<=n; i++){
            if(freq.find(i) == freq.end()) result.push_back(i);
        }
        return result;
    }
};