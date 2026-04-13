class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
       
        int MinD = INT_MAX;
        for(int i = 0 ; i< n ; i++){
            if(nums[i] == target ){
                MinD = min( MinD , (abs(i - start)) );
            }
        }
        return MinD ;
    }
};

