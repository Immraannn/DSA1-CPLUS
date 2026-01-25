#include<iostream>
using namespace std;
int getpivot(int arr[], int n){

    int s = 0;          // start
    int e = n - 1;      // end

    int mid = s + (e - s) / 2;

    while(s < e){

        // If mid element is >= first element,
        // then we are in LEFT sorted part
        // so pivot must be on RIGHT side
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }

        // Otherwise we are in RIGHT part
        // pivot lies on LEFT side (including mid)
        else{
            e = mid;
        }

        // recalculate mid
        mid = s + (e - s) / 2;
    }

    // when s == e, that index is pivot
    return s;   // return e also works because s == e
}

int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivot is "<<getpivot(arr,5);
    return 0;
}
//OUTPUT-

//Pivot is 3
