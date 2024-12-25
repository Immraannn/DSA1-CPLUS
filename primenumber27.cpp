#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter thre value of n:"<<endl;
 cin>>n;
 for(int i=2;i<n;i++){
if(n%i!=0){
cout<<"Number "<<n<<" is prime"<<endl;
break;
}
else{
    cout<<"nOT Prime";
    break;
}
 }

 return 0;
 }   
//  OUTPUT-
//  Enter thre value of n:
// 19
// Number 19 is prime