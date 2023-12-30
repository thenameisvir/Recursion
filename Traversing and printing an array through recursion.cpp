#include<iostream>
using namespace std;
void printarray(int arr[],int n){
  if(n==0) return;
  cout<<*arr<<" ";
  printarray(arr+1,n-1);

}
int main(){
  int arr[10] = {1,2,3,4,5,6,7};
  int n = 7;
  printarray(arr,n);
}