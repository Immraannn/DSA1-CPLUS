class Solution {
public:
    int maximumSumSubarray(vector<int>& nums, int k) {

        // Stores the sum of the current window
        int currentWindowSum = 0;

        // -------------------------------
        // Step 1: Calculate the sum of the
        // first window of size k
        // -------------------------------
        for (int i = 0; i < k; i++) {
            currentWindowSum += nums[i];
        }

        // Initialize the maximum sum with
        // the first window's sum
        int maximumSum = currentWindowSum;

        // --------------------------------------
        // Step 2: Slide the window one element
        // at a time
        // --------------------------------------
        for (int i = k; i < nums.size(); i++) {

            // Remove the element that is leaving
            // the window from the left
            currentWindowSum -= nums[i - k];

            // Add the new element entering
            // the window from the right
            currentWindowSum += nums[i];

            // Update the maximum sum if the
            // current window has a larger sum
            maximumSum = max(maximumSum, currentWindowSum);
        }

        // Return the maximum sum among all windows
        return maximumSum;
    }
};
