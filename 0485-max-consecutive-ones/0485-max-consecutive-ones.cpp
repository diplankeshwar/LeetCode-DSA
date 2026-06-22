class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int count =0;
        int MaxCount = 0;

        for(int i=0 ;i<n;i++){
            if(nums[i] == 1){
                count++;
                MaxCount = max(MaxCount,count);
            }else{
                count = 0;
            }
        }
        return MaxCount;
    }
};