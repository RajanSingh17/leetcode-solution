class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        string sorted1 = s1;
        sort(sorted1.begin(), sorted1.end());

        if (k > s2.size()) return false;  

        for (int i = 0; i <= (int)s2.size() - k; i++) {
            string window = s2.substr(i, k);
            sort(window.begin(), window.end());
            if (window == sorted1)
                return true;
        }

        return false;
    }
};
