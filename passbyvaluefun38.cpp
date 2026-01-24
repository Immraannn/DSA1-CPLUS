#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"N is "<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    dummy(n);
    cout<<"Number n is "<<n<<endl;
    return 0;
}
// OUTPUT-
// Enter the value of n:
// 6
// N is 7
// Number n is 6
// Key Concept Used Here

// ✅ Call by Value

// Changes inside the function do NOT affect the original variable


//| Call by Value       | Call by Reference           |
//| ------------------- | --------------------------- |
//| `void dummy(int n)` | `void dummy(int &n)`        |
//| Copy is passed      | Original variable is passed |
//| No change in main   | Change reflected in main    |


// Function works on a copy

