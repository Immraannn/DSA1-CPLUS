#include<iostream>
using namespace std;
void printarray (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapalternate(int arr[], int n){
    for(int i=0;i<n;i=i+2){
if(i+1<n){
   
   //  swap(arr[i],arr[i+1]);
   int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
}
}
int main(){
    int arr[6]={1,2,7,8,5,9};
    int brr[5]={1,2,3,4,5};
    swapalternate(arr,6);
    printarray(arr,6);
    cout<<endl;
    swapalternate(brr,5);
    printarray(brr,5);
    return 0;
}
// OUTPUT-
// 2 1 8 7 9 5 

// 2 1 4 3 5 