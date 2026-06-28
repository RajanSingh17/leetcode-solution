class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int current = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        current = max(nums[i], current + nums[i]);
        maxSum  = max(maxSum, current);
    }

    return maxSum;
    }
};
