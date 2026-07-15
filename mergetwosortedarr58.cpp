class Solution {
public:
    vector<int> mergeSortedArray(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Remaining elements of nums1
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Remaining elements of nums2
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};






class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Pointer to the last valid element in nums1
        int i = m - 1;

        // Pointer to the last element in nums2
        int j = n - 1;

        // Pointer to the last position of nums1
        // (where the largest element should be placed)
        int k = m + n - 1;

        // Compare elements from the end of both arrays
        while (i >= 0 && j >= 0) {

            // If current element in nums1 is larger,
            // place it at position k
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }

            // Otherwise place element from nums2
            else {
                nums1[k] = nums2[j];
                j--;
            }

            // Move to the next position from the end
            k--;
        }

        // If any elements are left in nums2,
        // copy them into nums1
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        // No need to copy remaining elements of nums1
        // because they are already in their correct positions.
    }
};
