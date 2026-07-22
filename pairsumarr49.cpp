vector<vector<int>> pairSum(vector<int>& nums, int target) {

    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {

        int sum = nums[left] + nums[right];

        if (sum == target) {
            ans.push_back({nums[left], nums[right]});
            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return ans;
}

// two pointer approach
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,6,8,9};
    int n=7;
    int target=10;

    int left=0;
    int right=n-1;

    while(left<right){

        int sum=arr[left]+arr[right];

        if(sum==target){
            cout<<"("<<arr[left]<<","<<arr[right]<<")"<<endl;
            left++;
            right--;
        }

        else if(sum<target){
            left++;
        }

        else{
            right--;
        }
    }
}
// o(n) time complexity


//vector
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {

        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {nums[left], nums[right]};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {};
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 6, 8};
    int target = 10;

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty())
        cout << ans[0] << " " << ans[1];
    else
        cout << "No pair found";
}
