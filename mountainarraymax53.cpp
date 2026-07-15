class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {

            int mid = left + (right - left) / 2;

            // We are on the increasing side
            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            }

            // We are on the decreasing side or at the peak
            else {
                right = mid;
            }
        }

        return left;
    }
};
