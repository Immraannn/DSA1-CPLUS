#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,3,4,1,3};
    cout<<"unique element is "<<unique(arr,5);
    return 0;
}
// OUTPUT-
// unique element is 4
