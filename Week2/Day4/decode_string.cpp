class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> numStack;
        string curr = "";
        int k = 0;

        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                numStack.push(k);
                strStack.push(curr);
                curr = "";
                k = 0;
            } else if (c == ']') {
                int repeat = numStack.top(); numStack.pop();
                string prev = strStack.top(); strStack.pop();
                for (int i = 0; i < repeat; i++) prev += curr;
                curr = prev;
            } else {
                curr += c;
            }
        }
        return curr;
    }
};
