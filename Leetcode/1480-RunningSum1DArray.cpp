// Running Sum of 1d Array
// 53 / 53 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 8.9 MB

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++) 
            nums[i] += nums[i-1];
        return nums;
    }
};