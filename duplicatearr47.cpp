#include<iostream>
using namespace std;
int dupli(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[2]=arr[i]){
        count++;
    }
    }return count;
}
int  main(){
    int arr[5]={1,2,3,4,3};
    cout<<dupli(arr,5);
    return 0;
}