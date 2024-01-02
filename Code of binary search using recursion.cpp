#include<iostream>
using namespace std;
int binaryrecursion(int arr[],int target,int s,int e){
  if(s>e) return -1;
  int m = s+(e-s)/2;
  if(target==arr[m]){
    return m;
  }
  if(target>arr[m]){
    return binaryrecursion(arr,target,m+1,e);
  }
  if(target<arr[m]){
    return binaryrecursion(arr,target,s,m-1);
  }
}
int main(){
  int n = 10;
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int target = 6;
  int s = 0;
  int e = n-1;
  cout<<binaryrecursion(arr,target,s,e);
}