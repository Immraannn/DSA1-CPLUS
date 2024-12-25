#include<iostream>
using namespace std;
void reverse(int arr[], int n){
cout<<endl<<"Reversed array "<<endl;
int i;
for(int i=(n-1);i>=0;i--){
    cout<<arr[i]<<" ";
}
}
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
int arr[size];
cout<<"Enter the array"<<endl;
for(int i=0;i<size;i++){ 
    
cin>>arr[i];  
}
cout<<"Given array"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
reverse(arr,size);

return 0;
}
// OUTPUT-
// Enter the size
// 5
// Enter the array
// 1 2 3 4 5   
// Given array
// 1 2 3 4 5
// Reversed array
// 5 4 3 2 1