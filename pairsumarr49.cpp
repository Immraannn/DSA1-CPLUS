#include<iostream>
using namespace std;

int main() {

    int x = 5;
    int arr[] = {1,2,3,4,6};

    for(int i = 0; i < 5; i++) {

        for(int j = i + 1; j < 5; j++) {

            if(arr[i] + arr[j] == x) {

                cout << arr[i] << " " << arr[j] << endl;

            }
        }
    }

    return 0;
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

vector<int> twoSum(vector<int>& nums, int target)
{
    int n = nums.size();

    // Check every possible pair
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {};
}

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];
}
