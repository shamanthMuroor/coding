// Find Numbers with Even Number of Digits
// 104 / 104 test cases passed.
// Status: Accepted
// Runtime: 8 ms
// Memory Usage: 10.3 MB

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size(),ans=0;
        for(int i=0; i<n; i++){
            int a = nums[i],count=0;
            while(a > 0){
                a = a / 10;
                count++;
            }
            if(count % 2 == 0)
                ans++;
        }
        return ans;
    }
};