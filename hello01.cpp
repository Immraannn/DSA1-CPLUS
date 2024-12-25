#include<iostream>
using namespace std;
int main(){
    cout<<"Hello "<<endl;
    int a=123;
    int w='c';
    char b='v';
    bool bl=true;
    float f=1.2;
    double d=1.233;
    int size=sizeof(a);
    char ch1=123456;//char has 1bytes 
    cout<<a<<endl<<w<<endl<<b<<endl<<bl<<endl<<f<<endl<<d<<endl<<size<<endl;
    cout<<ch1<<endl;
    int p=2/5;
    float z=2.0/5.0;
    cout<<p<<endl;
    cout<<z<<endl;
    int k=2;
    int l=3;
    bool first=(a==b);
    bool second=(a>b);
    bool third=(a<b);
    cout<<first<<endl<<second<<endl<<third;

    return 0;
}
// OUTPUT-
// Hello 
// 123
// v
// 1
// 1.2
// 1.233
// 4
//@
//0
//0.4
//0
//1
//0