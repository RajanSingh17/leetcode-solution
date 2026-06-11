class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(result, "", 0, 0, n);
        return result;
    }

private:
    void solve(vector<string>& result, string curr, int open, int close, int n) {
        if (curr.size() == 2 * n) {
            result.push_back(curr);
            return;
        }
        if (open < n)
            solve(result, curr + '(', open + 1, close, n);
        if (close < open)
            solve(result, curr + ')', open, close + 1, n);
    }
};
