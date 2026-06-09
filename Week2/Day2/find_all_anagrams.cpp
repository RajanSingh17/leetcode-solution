class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (p.size() > s.size()) return res;

        int freqP[26] = {}, freqS[26] = {};
        int k = p.size();

        for (int i = 0; i < k; i++) {
            freqP[p[i] - 'a']++;
            freqS[s[i] - 'a']++;
        }

        if (memcmp(freqP, freqS, sizeof(freqP)) == 0)
            res.push_back(0);

        for (int i = k; i < s.size(); i++) {
            freqS[s[i] - 'a']++;           // add right
            freqS[s[i - k] - 'a']--;       // remove left
            if (memcmp(freqP, freqS, sizeof(freqP)) == 0)
                res.push_back(i - k + 1);
        }

        return res;
    }
};
