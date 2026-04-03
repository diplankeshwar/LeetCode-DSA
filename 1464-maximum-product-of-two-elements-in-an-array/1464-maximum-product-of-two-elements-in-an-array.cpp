class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int>MaxHeap;
        for(int x : nums){
            MaxHeap.push(x);
        }
        int a = MaxHeap.top();
        MaxHeap.pop();
        int b = MaxHeap.top();
        return (a-1)*(b-1);
        

        
    }
};