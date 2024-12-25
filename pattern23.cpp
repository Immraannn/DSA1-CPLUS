#include<iostream>
using namespace std;
int main(){
int n;
int i=1;
cout<<"Enter the value of n:"<<endl;
cin>>n;  
while(i<=n){ 
    int k=n-i;
while(k){
    cout<<" ";
    k--;
}
int j=1;
while(j<=i){
    cout<<j;
    j++;
}
int l=1;
int count=i-1;
while(l<=i-1){
    
    cout<<count;
    count--;
    l++;

}
cout<<endl;
i++;  
}  
    return 0;
}
// OUTOUT-
// Enter the value of n:
// 4
//    1
//   121
//  12321
// 1234321