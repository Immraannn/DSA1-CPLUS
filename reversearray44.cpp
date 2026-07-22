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

// extra concept of swap
// withoout assigning new var like temp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << ", b = " << b << endl;
}

// no overflow
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a = " << a << ", b = " << b << endl;
}
