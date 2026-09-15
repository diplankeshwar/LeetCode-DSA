class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n = nums.length;
        int sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
        }
        int startidx = 0;
        int endidx = k - 1;
        int max = sum;
        while(endidx < n - 1 ){
            sum -= nums[startidx] ;
            startidx++;

            endidx++;
            sum += nums[endidx] ;
            
            max = Math.max(max , sum);
        }
        return ( double ) max / k ; 
    }
}