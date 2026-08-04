class Solution {
public:
    int maximumSumSubarray(vector<int>& nums, int k) {
        int currentWindowSum = 0;
        for (int i = 0; i < k; i++) {
            currentWindowSum += nums[i];
        }
        int maximumSum = currentWindowSum;
        for (int i = k; i < nums.size(); i++) {
            currentWindowSum -= nums[i - k];
            currentWindowSum += nums[i];
            maximumSum = max(maximumSum, currentWindowSum);
        }
        return maximumSum;
    }
};
