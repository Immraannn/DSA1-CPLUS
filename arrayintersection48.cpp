#include <iostream>
#include <algorithm>
using namespace std;

void arrayIntersection(int arr1[], int n1, int arr2[], int n2, int result[], int &resultSize) {
    sort(arr1, arr1 + n1); // Sort the first array
    sort(arr2, arr2 + n2); // Sort the second array

    int i = 0, j = 0;
    resultSize = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else { // arr1[i] == arr2[j]
            result[resultSize++] = arr1[i];
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[100]; // Large enough array to store intersection
    int resultSize;

    arrayIntersection(arr1, n1, arr2, n2, result, resultSize);

    cout << "Intersection of the arrays: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
        cout << endl;
}
// OUTPUT-
// Intersection of the arrays: 2 2 3 
