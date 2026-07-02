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
