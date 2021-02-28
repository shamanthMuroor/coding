// Kids With the Greatest Number of Candies
// 103 / 103 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 9.4 MB

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        vector<bool> res;
        
        for(int i=0; i<candies.size(); i++) {
            maxCandy = max(maxCandy, candies[i]);
        }
        
        for(int i=0; i<candies.size(); i++) {
            res.push_back(candies[i] + extraCandies >= maxCandy);
        }
        return res;
    }
};