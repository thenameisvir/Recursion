#include<iostream>
#include<climits>
using namespace std;
int findmax(int arr[],int n,int a){
if(n==0) return a;
if(*arr>a){
  a = *arr;
}
return findmax(arr+1,n-1,a);

}
int main(){
  int n = 10;
  int arr[10] = {12,23,34,45,56,67,78,89,90,10};
  int a = INT_MIN;
  cout<<findmax(arr,n,a);
}