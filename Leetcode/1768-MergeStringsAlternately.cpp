// 1768 - Merge Strings Alternately
// 108 / 108 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 6.2 MB

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int len1 = word1.length();
        int len2 = word2.length();
        while(len1 && len2) {
            res += word1[word1.length() - --len1 - 1 ];
            res += word2[word2.length() - --len2 - 1 ];
        }
        while(len1--){
            res += word1[word1.length() - len1 - 1 ];
        }
        while(len2--) {
            res += word2[word2.length() - len2 - 1 ];   
        }
        return res;
    }
};