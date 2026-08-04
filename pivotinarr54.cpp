// Why is it called Pivot?
// Imagine the array as a circle.
// Original
// 1 2 3 4 5 6 7
// Rotate
// 5 6 7 1 2 3 4
// Everything is still sorted except one "breaking point".
// That breaking point is the pivot.
class Solution {
public:
    int findPivot(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {

            int mid = left + (right - left) / 2;

            // Pivot is on the right
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            }

            // Pivot is at mid or on the left
            else {
                right = mid;
            }
        }

        return left;
    }
};
