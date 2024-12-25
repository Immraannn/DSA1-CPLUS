#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter thre value of n:"<<endl;
 cin>>n;
 int sum=0;
 int prod=1;
 while(n!=0){
    int digit=n%10;
    prod *=digit;
    sum +=digit;
    n=n/10;
 }
 cout<<"product of digits is "<<prod<<endl;
 cout<<"sum of digits is "<<sum<<endl;
 return 0;
 }   
//  OUTPUT-
//  Enter thre value of n:
// 234
// product of digits is 24
// sum of digits is 9