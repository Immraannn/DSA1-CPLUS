#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortone(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        //agar yaha pahuch gye ho matlab 
        else if(arr[i]==1 && arr[j]==0 &&i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;}
    }
}
int main(){
    int arr[8]={1,1,0,1,0,0,1,0};
    sortone(arr,8);
    printarray(arr,8);
    return 0;
}
// OUTPUT-
// 0 0 0 0 0 1 1 1 