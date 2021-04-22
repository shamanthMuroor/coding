// 1816 - Truncate Sentence
// 72 / 72 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 6.3 MB


class Solution {
public:
    string truncateSentence(string s, int k) {
        string res;
        int count = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                if(++count == k)
                    break;
            }
            res += s[i];
        }
        return res;
    }
};