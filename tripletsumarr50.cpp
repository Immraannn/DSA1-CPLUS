#include<iostream>
using namespace std;
int main(){
    int x=5;
    int arr[6]={4,5,3,6,0,6};
    for(int i=0;i<6;i++){
     int ele1=arr[i];{
        for(int j=0;j<6;j++){
            int ele2=arr[j];
          for(int k=0;k<6;k++){
            int ele3=arr[k];
            if(ele1+ele2+ele3==12 &&i>j &&j>k){
                cout<<"("<<ele1<<","<<ele2<<","<<ele3<<")"<<" ";
            }
          }
        }
     }
    }
    return 0;
}
// OUTPUT-
// (3,5,4) (6,0,6) 