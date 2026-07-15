class Solution {
public:
    void sortColors(vector<int>& nums) {

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {

            if (nums[i] == 0) {
                i++;
            }

            else if (nums[j] == 1) {
                j--;
            }

            else {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }
    }
};
