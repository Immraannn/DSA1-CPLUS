class Solution {
public:
    void swapAlternate(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i += 2) {
            int temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;
        }
    }
};
