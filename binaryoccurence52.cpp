#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int s=0;int e=n-1;
  int  mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e){
if(arr[mid]==key){
    ans=mid;
    e=mid-1;
}
else if(key>arr[mid]){//right mn jao
    s=mid+1;
}
else if(key<arr[mid]){//left mn jao
e=mid-1;
}
mid=s+(e-s)/2;
  }
  return ans;
}

int lastoccurence(int arr[],int n,int key){
    int s=0;int e=n-1;
  int  mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e){
if(arr[mid]==key){
    ans=mid;
    s=mid+1;
}
else if(key>arr[mid]){//right mn jao
    s=mid+1;
}
else if(key<arr[mid]){//left mn jao
e=mid-1;
}
mid=s+(e-s)/2;
  }
  return ans;
}
int main(){
    int even[5]={1,2,3,3,5};
    int even1[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout<<" first occurencce of 3 at index "<<firstoccurence(even,5,3)<<endl;
    cout<<" last occurencce of 3 at index "<<lastoccurence(even,5,3)<<endl;
    cout<<" first occurencce of 3 at index "<<firstoccurence(even1,11,3)<<endl;
    cout<<" last occurencce of 3 at index "<<lastoccurence(even1,11,3)<<endl;
    return 0;
    // if total occurence to find then (lastindex-firstindex)+1
}
// OUTPUT-
// first occurencce of 3 at index 2
//  last occurencce of 3 at index 3
//first occurencce of 3 at index 2
//last occurencce of 3 at index 9