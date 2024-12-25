#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}
void printarr(char arr[],int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int num[5]={1,2,3,4,5};
    printarray(num,5);
    char ch[5]={'a','b','c','d','e'};
    printarr(ch,5);
    return 0;
}