#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if( arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;//return e; will also give same
}
    int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
      else  if(key>arr[mid]){
            start =mid+1;
        }
        //go to left wala part
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int findposition(int arr[], int n, int k){

    // Step 1: find pivot (index of minimum element)
    int pivot = getpivot(arr, n);

    // Step 2: decide which sorted part k lies in

    // If k is between pivot and last element,
    // then search in RIGHT sorted part
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarysearch(arr, pivot, n-1, k);
    }

    // Otherwise search in LEFT sorted part
    else{
        return binarysearch(arr, 0, pivot-1, k);
    }
}

int main(){
    int arr[5]={12,15,18,2,4};
    cout<<"position of sorted rotated array of k=2 is  "<<findposition(arr,5,2);
    return 0;

}
