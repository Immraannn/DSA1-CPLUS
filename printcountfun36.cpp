#include<iostream>
using namespace std;
void printcount(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    printcount(n);
    return 0;
}
// OUTPUT-
// Enter the value of n:
// 8
// 1 2 3 4 5 6 7 8