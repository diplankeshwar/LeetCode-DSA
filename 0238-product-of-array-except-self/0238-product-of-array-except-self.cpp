class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);
        vector<int>suff(n);
        vector<int>result(n);

        int prod = 1;
        
        for(int i=n-1; i>=0; i--){
            prod *= nums[i];
            suff[i] = prod;            
        }
        prod = 1;
        for(int i=0; i<n; i++){
            prod *= nums[i];
            pre[i] = prod;    

            if(i == 0) result[i] = suff[i+1];
            else if(i == n-1) result[i] = pre[i-1];
            else result[i] = pre[i-1] * suff[i+1];
        }
        return result;

        
    }
};