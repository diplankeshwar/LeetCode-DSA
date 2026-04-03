class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>freq;

        for(int x : nums){
            if(freq.find(x) != freq.end()){
                count += freq[x];
                freq[x]++;
            }else{
                freq[x]++;
            }
        }
        return count;
    }
};