#include<iostream>
using namespace std;
int main(){
int n;
int i=1;
cout<<"Enter the value of n:"<<endl;
cin>>n;
while(i<=n){
    int j=1;
while(j<=i){  
cout<<"*";
j++;

}
cout<<endl;
i++;
 } 
 return 0;
}
// OUTPUT-
// Enter the value of n:
// 3
// *
// **
// ***