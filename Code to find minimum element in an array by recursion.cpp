#include<iostream>
#include<climits>
using namespace std;
int searchminimum(int arr[],int n,int index,int a){
  if(n==0) return 0;
  if(arr[index]<a){
    a = arr[index];
  }
  searchminimum(arr,n-1,index+1,a);
  return a;
}
int main(){
  int n = 10;
  int arr[] = {12,23,34,45,56,67,78,89,90,10};
  int index = 0;
  int a = INT_MAX;
  cout<<searchminimum(arr,n,index,a);
}