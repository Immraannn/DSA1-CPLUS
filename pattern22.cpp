#include<iostream>
using namespace std;
int main(){
int n;
int i=1;
cout<<"Enter the value of n:"<<endl;
cin>>n;  
while(i<=n){ 
    int k=1;
while(k<=i-1){
    cout<<" ";
    k++;
}
int j=n-i+1;
while(j){
    cout<<"*";
    j--;
}
cout<<endl;
i++;  
}  
    return 0;
}
// OUTPUT-
// Enter the value of n:
// 4
// ****
//  ***
//   **
//    *