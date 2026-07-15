class Solution {
public:
    void reverseArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
