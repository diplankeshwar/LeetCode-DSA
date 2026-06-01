class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int total = 0;

        for (int i = 0; i < cost.size(); i += 3) {
            total += cost[i];       // pay for most expensive
            
            if (i + 1 < cost.size())
                total += cost[i + 1]; // pay for second expensive
            // i+2 candy is free
        }

        return total;
    }
};