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
