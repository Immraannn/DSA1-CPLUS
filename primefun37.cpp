#include<iostream>
using namespace std;
void prime(int n){
    for(int i=2;i<n;i++){
        if(n%i!=0){
            cout<<"Number "<<n<<" is prime ";
            break;
        }
        else{
            cout<<"Number "<<n<<" is  not prime ";
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    prime(n);
    return 0;
}
// OUTOUT-
// Enter the value of n:
// 20
// Number 20 is  not prime