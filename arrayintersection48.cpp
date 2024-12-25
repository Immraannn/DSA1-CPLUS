#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,4,5,7,8}; 
    int arr2[5]={3,8,4,5,1} ;
    for(int i=0;i<5;i++){
        int element=arr1[i];
        for(int j=0;j<5;j++){
            if(element==arr2[j]){
                cout<<element<<" ";
        break;
            }
        }
    }
    
    
    
       return 0;
}
// OUTPUT-
// 1 4 5 8