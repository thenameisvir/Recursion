#include<iostream>
using namespace std;
int search(int arr[],int target,int n,int index){
  if(n==0) return 0 ;
  if(arr[index]==target) return index;
  search(arr,target,n-1,index+1);
}
int main(){
  int n = 5;
  int arr[10] = {1,2,3,4,5};
  int target = 3;
  int index = 0;
  cout<<search(arr,target,n,index);
}