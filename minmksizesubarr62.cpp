class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        // Left pointer of the sliding window
        int left = 0;

        // Stores the current window sum
        int currentWindowSum = 0;

        // Initialize answer with a very large value
        int minimumLength = INT_MAX;

        // Expand the window by moving the right pointer
        for (int right = 0; right < nums.size(); right++) {

            // Include the current element in the window
            currentWindowSum += nums[right];

            // If the current window satisfies the condition,
            // shrink it from the left
            while (currentWindowSum >= target) {

                // Update the minimum window length
                minimumLength = min(minimumLength,
                                    right - left + 1);

                // Remove the leftmost element
                currentWindowSum -= nums[left];

                // Move the left pointer forward
                left++;
            }
        }

        // If no valid window exists
        if (minimumLength == INT_MAX)
            return 0;

        return minimumLength;
    }
};
