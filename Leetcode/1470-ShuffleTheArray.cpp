// 1470 Shuffle the Array
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 9.8 MB

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s_part = n;
        vector<int> res;
        for(int i=0; i<n; i++) {
            res.push_back(nums[i]);
            res.push_back(nums[s_part++]);
        }
        return res;
    }
};