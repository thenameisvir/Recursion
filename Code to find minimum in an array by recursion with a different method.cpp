#include<iostream>
#include<climits>
using namespace std;
int searchminimum(int arr[],int n,int a){
  if(n==0){
    return 0;
  }
  if(*arr<a){
    a = *arr;
  }
  searchminimum(arr+1,n-1,a);
  return a;
}
int main(){
  int n = 5;
  int a = INT_MAX;
  int arr[10] = {1,2,3,4,5};
  cout<<searchminimum(arr,n,a);

}