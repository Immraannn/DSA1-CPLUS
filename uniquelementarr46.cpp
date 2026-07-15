class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }

        return ans;
    }
};
// OUTPUT-
// unique element is 4
// 🔹 Key Idea: XOR Properties (Very Important)

// XOR (^) has these properties:

// a ^ a = 0
// a ^ 0 = a
XOR is commutative & associative
→ Order doesn’t matter
