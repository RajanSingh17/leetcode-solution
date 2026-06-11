class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> lps(n, 0);
        
        
        int len = 0, i = 1;
        while (i < n) {
            if (s[i] == s[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0) len = lps[len - 1];
                else lps[i++] = 0;
            }
        }
        
       
        int patLen = n - lps[n - 1];
        return lps[n - 1] != 0 && n % patLen == 0;
    }
};
