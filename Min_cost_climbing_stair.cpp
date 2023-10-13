class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int a = cost[0];
        int b = cost[1];
        int minCost = 0;

        for(int i = 2; i < cost.size(); i++) {
            minCost = cost[i] + min(a, b);
            a = b;
            b = minCost;
        }
        
        return min(a, b);
    }
};
