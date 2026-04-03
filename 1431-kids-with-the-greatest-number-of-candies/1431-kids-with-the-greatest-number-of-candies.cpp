class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();

        int Max = 0;
        for(int x : candies) Max = max(Max ,x);
        vector<bool>result;
        for(int i=0; i<n; i++){
            if(candies[i] + extraCandies >= Max){
                result.push_back(true);
            } else{
                result.push_back(false);
            }
        }
        return result;
        
    }
};