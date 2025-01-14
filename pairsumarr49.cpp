#include<iostream>
using namespace std;
int main(){
    int x=5;
    int arr[5]={1,2,3,4,6};
    for(int i=0;i<5;i++){
     int ele1=arr[i];{
        for(int j=0;j<5;j++){
            int ele2=arr[j];
          if(arr[j]>arr[i]){  if(ele1+ele2==5){
                cout<<arr[i]<<""<<arr[j]<<"  ";
            }}
        }
     }
    }
    return 0;
}
//OUTPUT-
//32 41