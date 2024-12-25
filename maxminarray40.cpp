#include<iostream>
using namespace std;
int getmax(int num[], int size){
    int max= INT_FAST8_MIN;
    for(int i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getmin(int num[], int size){
    int min= __INT_MAX__;
    for(int i=0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
cout<<"Maximum value of array is "<<getmax(num,size)<<endl;
cout<<"Minimum value of array is "<<getmin(num,size);
    return 0;
// }OUTPUT-
// 6
// -1 6 88 77 105 -47 78
// Maximum value of array is 105
// Minimum value of array is -47