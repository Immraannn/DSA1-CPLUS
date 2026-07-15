class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Maximum sum found so far
        int maximumSum = INT_MIN;

        // Sum of the current subarray
        int currentSum = 0;

        // Traverse the array
        for (int i = 0; i < nums.size(); i++) {

            // Add the current element to the running sum
            currentSum += nums[i];

            // Update the maximum sum
            maximumSum = max(maximumSum, currentSum);

            // If current sum becomes negative,
            // discard it and start a new subarray
            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maximumSum;
    }
};
Dry run
nums = {-2,1,-3,4,-1,2,1,-5,4}


| i     | nums[i] | Current Sum | Maximum Sum |
| ----- | ------- | ----------- | ----------- |
| 0     | -2      | -2          | -2          |
| Reset |         | 0           |             |
| 1     | 1       | 1           | 1           |
| 2     | -3      | -2          | 1           |
| Reset |         | 0           |             |
| 3     | 4       | 4           | 4           |
| 4     | -1      | 3           | 4           |
| 5     | 2       | 5           | 5           |
| 6     | 1       | 6           | 6           |
| 7     | -5      | 1           | 6           |
| 8     | 4       | 5           | 6           |
