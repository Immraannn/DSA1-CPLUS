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
