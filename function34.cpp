#include<iostream>
using namespace std;
int pow(int x,int y){
    int prod=1;
    for(int i=1;i<=y;i++){ 
        prod *=x;
    }
    return prod;
}
int main(){
  int a;
  cout<<"Enter the value of a :"<<endl;  
  cin>>a;
  int b;
  cout<<"Enter the value of b :"<<endl;  
  cin>>b;
//   int ans=1;
//   for(int i=1;i<=b;i++){
// ans *=a;
//   }
//   cout<<ans;
  cout<<pow(a,b);
    return 0;
}