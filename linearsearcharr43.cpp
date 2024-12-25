#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,1,-2,10,1,-2,0,5,22,1};
    //whether 1 is present or not
    int count=0;
    for(int i=0;i<10;i++){
if(arr[i]==1){
    
    cout<<arr[i]<<"respective index is "<<i<<endl;
}
    }
    //cout<<count;
    return 0;
}
// OUTPUT-
// 1respective index is 1
// 1respective index is 4
// 1respective index is 9