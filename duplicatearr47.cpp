#include <iostream>
using namespace std;

int dupli(int arr[], int n, int key) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 3};

    cout << dupli(arr, 5, 3);

    return 0;
}
