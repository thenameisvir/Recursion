#include<iostream>
#include<climits>
using namespace std;
void findmax(int arr[],int n){
  if(n==0) return;
  *arr = 2**arr;
  cout<<*arr<<" ";
  findmax(arr+1,n-1);

}
int main(){
  int n = 10;
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  findmax(arr,n);
}