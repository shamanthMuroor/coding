// Richest Customer Wealth
// 34 / 34 test cases passed.
// Status: Accepted
// Runtime: 12 ms
// Memory Usage: 8.2 MB

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        for(int i=0; i<accounts.size(); i++) {
            int wealth = 0;
            for(int j=0; j<accounts[i].size(); j++) {
                wealth += accounts[i][j];
            }
            if (wealth > maxwealth) {
                maxwealth = wealth;
            }
        }
        return maxwealth;
    }
};