#include <iostream>
#include <vector>
using namespace std;

// Function to calculate sum of elements
int findSum(vector<int>& arr) {
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << "Sum = " << findSum(arr);

    return 0;
}







#include<iostream>
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum +=arr[i];
    }return sum;
}
using namespace std;
int main(){
    int size;
    cout<<"ENter the value of size:"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int add=sum(arr,size);
    cout<<add;
    return 0;
}
// OUTPUT-
// ENter the value of size:
// 4
// 1 2 3 4 
// 1 2 3 4
// 10
