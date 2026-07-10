#include<iostream>
using namespace std;

int main() {

    int arr[] = {4,5,3,6,0,6};
    int n = 6;
    int target = 12;

    for(int i = 0; i < n - 2; i++) {

        for(int j = i + 1; j < n - 1; j++) {

            for(int k = j + 1; k < n; k++) {

                if(arr[i] + arr[j] + arr[k] == target) {

                    cout << "("
                         << arr[i] << ", "
                         << arr[j] << ", "
                         << arr[k] << ")" << endl;
                }
            }
        }
    }

    return 0;
}
// OUTPUT-
// (3,5,4) (6,0,6) 


//using two pointer

#include <iostream>
#include <algorithm>
using namespace std;

// Function to find all triplets whose sum equals target
void threeSum(int arr[], int n, int target)
{
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Fix one element
    for(int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;

        // Step 3: Find the remaining two elements
        while(left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            // Triplet found
            if(sum == target)
            {
                cout << arr[i] << " "
                     << arr[left] << " "
                     << arr[right] << endl;

                // Move both pointers to search for more triplets
                left++;
                right--;
            }

            // Sum is too small
            else if(sum < target)
            {
                left++;
            }

            // Sum is too large
            else
            {
                right--;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    threeSum(arr, n, target);

    return 0;
}

//concept

| Problem       | Time Complexity | Space Complexity | Reason                                                                                                                                      |
| ------------- | --------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| **Two Sum**   | **O(n log n)**  | **O(1)**         | Sorting takes `O(n log n)`, then two pointers traverse the array once in `O(n)`. Overall dominated by sorting.                              |
| **Three Sum** | **O(n²)**       | **O(1)**         | Sorting takes `O(n log n)`, then an outer loop `O(n)` and an inner two-pointer traversal `O(n)` give `O(n²)`. Overall dominated by `O(n²)`. |

General Rule
Two Sum: You need 2 elements, so the loop (if any) can go until n - 1.
Three Sum: You need 3 elements, so the fixed element must stop at n - 3, written as:
