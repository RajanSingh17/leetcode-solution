class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int best = 0;

        for (int i = 0; i < s.size(); i++) {
            set<char> seen;
            for (int j = i; j < s.size(); j++) {
                if (seen.count(s[j]))  // duplicate found, stop early
                    break;
                seen.insert(s[j]);
                best = max(best, j - i + 1);
            }
        }

        return best;
    }
};
