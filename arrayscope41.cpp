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

// | Passing `int`                      | Passing `int[]`                              |
// | ---------------------------------- | -------------------------------------------- |
// | Copy of value is passed            | Address of first element is passed           |
// | Changes do **not** affect original | Changes **do** affect original               |
// | Separate memory                    | Same underlying array memory                 |
// | `void fun(int x)`                  | `void fun(int arr[])` ≡ `void fun(int *arr)` |
// ey takeaway
// Primitive variables (like int, float, char) are passed by value by default, so the function gets a copy.
// Arrays cannot be passed by value using the usual function parameter syntax. Instead, the array name decays
// to a pointer to its first element, so the function operates on the original array unless you explicitly make a copy yourself.
