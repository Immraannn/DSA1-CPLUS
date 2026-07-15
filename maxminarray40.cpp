#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& arr) {
    int maxi = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    return maxi;
}

int findMin(vector<int>& arr) {
    int mini = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < mini)
            mini = arr[i];
    }

    return mini;
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 7};

    cout << "Maximum = " << findMax(arr) << endl;
    cout << "Minimum = " << findMin(arr) << endl;

    return 0;
}





#include<iostream>
using namespace std;
int getmax(int num[], int size){
    int max= INT_FAST8_MIN;
    for(int i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getmin(int num[], int size){
    int min= __INT_MAX__;
    for(int i=0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
cout<<"Maximum value of array is "<<getmax(num,size)<<endl;
cout<<"Minimum value of array is "<<getmin(num,size);
    return 0;
// }OUTPUT-
// 6
// -1 6 88 77 105 -47 78
// Maximum value of array is 105
// Minimum value of array is -47
