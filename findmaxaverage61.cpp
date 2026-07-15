class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int currentWindowSum = 0;
        for (int i = 0; i < k; i++) {
            currentWindowSum += nums[i];
        }
        int maximumWindowSum = currentWindowSum;

        /-
        for (int i = k; i < nums.size(); i++) {
            currentWindowSum -= nums[i - k];
            currentWindowSum += nums[i];
            maximumWindowSum = max(maximumWindowSum, currentWindowSum);
        }
        return (double)maximumWindowSum / k;
    }
};

// nums = {1, 12, -5, -6, 50, 3}
// k = 4
// Possible windows:
// 1  12  -5  -6  = 2
// 12 -5  -6  50  = 51
// -5 -6  50   3  = 42
// Averages:
// 2  / 4 = 0.5
// 51 / 4 = 12.75
// 42 / 4 = 10.5
// Answer:
// 12.75
