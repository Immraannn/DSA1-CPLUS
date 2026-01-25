#include<iostream>
using namespace std;
int peakmountain(int arr[], int n){

    int s = 0;          // start index
    int e = n - 1;      // end index

    // calculate mid
    int mid = s + (e - s) / 2;

    // binary search loop
    while(s < e){

        // If mid element is smaller than next element,
        // we are on increasing slope → peak lies on right side
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }

        // Otherwise we are on decreasing slope or at peak
        // → peak lies on left side (including mid)
        else{
            e = mid;
        }

        // update mid after changing s or e
        mid = s + (e - s) / 2;
    }

    // when s == e, that index is the peak
    return s;
}



int main(){
    int even[4]={3,4,5,1};
    cout<<"Peak Mountain index is "<<peakmountain(even,4);
    return 0;
}
// OUTPUT-

// Peak Mountain index is 2
