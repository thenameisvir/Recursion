#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],int n)
{
  if(n==0) return ;
  if(*arr%2==0){
    cout<<*arr<<" ";
  }
  solve(arr+1,n-1);


}
int main(){
  int n = 10;
  int arr[10] = {12,23,34,45,56,67,78,89,90,10};
  solve(arr,n);
}