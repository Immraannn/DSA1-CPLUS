#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"Inside the function "<<endl;
    //updating aray value
    arr[0]=120;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
}
int main(){

int arr[3]={1,2,3};
update(arr,3);
cout<<"printing in the main function "<<endl;
for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return 0;}
// OUTPUT-
// Inside the function 
// 120 2 3
// printing in the main function
// 120 2 3