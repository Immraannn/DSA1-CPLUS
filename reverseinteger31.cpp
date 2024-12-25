#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;
while(n!=0){
    int digit=n%10;
    cout<<digit;
    n=n/10;

}    
return 0;    
}
// OUTPUT-
// Enter the value of n:
// 1289
// 9821
