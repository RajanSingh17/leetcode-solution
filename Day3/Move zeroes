class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int num : nums)
            if (num != 0)
                nums[pos++] = num;
        while (pos < nums.size())
            nums[pos++] = 0;
    }
};
