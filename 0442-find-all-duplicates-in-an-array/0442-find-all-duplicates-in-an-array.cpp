class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return {};
        vector<int> result;

        unordered_map<int,int>freq;
        for(int x : nums){
            freq[x]++;
        }
        for(auto [num,Freq]: freq){
            if(Freq == 2){
                result.push_back(num);

            }
        }


        return result;
    }
};