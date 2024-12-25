#include<iostream>
using namespace std;
int main(){
    int num=1;
    char ch='1';

switch(ch){
case 1: cout<<"first"<<endl;
        cout<<"First again"<<endl;
        break;
case '1': switch(num){
    case 1: cout<<"The value of num is"<<num;
    break;
}  break;
default: cout<<"It is default case"<<endl;      
}
    return 0;
}
//OUTPUT-
//The value of num is1