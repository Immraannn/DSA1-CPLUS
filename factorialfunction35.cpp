#include<iostream>
using namespace std;
int factorial(int n){
    int prod=1;
for(int i=1;i<=n;i++){
prod *=i;
}
return prod;
}
int ncr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"The factorial is "<<ncr(a,b);
    return 0;
}
// OUTPUT-
// Enter the value of a:
// 8
// Enter the value of b:
// 2
// The factorial is 28