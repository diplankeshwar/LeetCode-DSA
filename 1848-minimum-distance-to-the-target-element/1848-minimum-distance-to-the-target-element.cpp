class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        if(target ==1 && start ==0){
            return 0;
        }
        int MinD = INT_MAX;
        for(int i = 0 ; i< n ; i++){
            if(nums[i] == target ){
                MinD = min( MinD , (abs(i - start)) );
            }
        }
        return MinD ;
    }
};

