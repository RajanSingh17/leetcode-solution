class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        vector<int> res(nums.size());
        int pos = nums.size() - 1;

        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r]))
                res[pos--] = nums[l] * nums[l++];
            else
                res[pos--] = nums[r] * nums[r--];
        }

        return res;
    }
};
