#include<iostream>
using namespace std;
int main(){
int n;
 int i=2;
 cout<<"Enter thre value of n:"<<endl;
 cin>>n;
 while(i<n){
if(n%i==0){
    cout<<"Not prime for"<<i<<endl;
}
else{
    cout<<"prime for"<<i<<endl;
}
i++;
 } 
 
}
// OUTPUT-
// Enter thre value of n:
// 6
// Not prime for2
// Not prime for3
// prime for4
// prime for5