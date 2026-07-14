#include<vector>
using namespace std;
vector<vector<int> > pairSum(vector<int> &arr, int s){
   vector< vector<int> > ans;
   
   for(int i=0;i<arr.size(); i++ )
   {
   		for(int j = i+1; j<arr.size(); j++) {
        	if(arr[i] +arr[j] == s)
            {
            	vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
   }
   sort(ans.begin(), ans.end());
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
