class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int ans = 0;

        while (left < right) {

            int area = min(height[left], height[right]) 
                       * (right - left);

            ans = max(ans, area);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return ans;
    }
};
// left = 0
// right = 8
// ans = 0


// | left | right | heights | width | area | ans | move    |
// | ---: | ----: | ------- | ----: | ---: | --: | ------- |
// |    0 |     8 | 1, 7    |     8 |    8 |   8 | left++  |
// |    1 |     8 | 8, 7    |     7 |   49 |  49 | right-- |
// |    1 |     7 | 8, 3    |     6 |   18 |  49 | right-- |
// |    1 |     6 | 8, 8    |     5 |   40 |  49 | right-- |
// |    1 |     5 | 8, 4    |     4 |   16 |  49 | right-- |
// |    1 |     4 | 8, 5    |     3 |   15 |  49 | right-- |
// |    1 |     3 | 8, 2    |     2 |    4 |  49 | right-- |
// |    1 |     2 | 8, 6    |     1 |    6 |  49 | right-- |
