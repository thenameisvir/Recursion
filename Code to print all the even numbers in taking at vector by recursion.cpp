#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],int n,vector<int>&v){
  if(n==0) return ;
  if(*arr%2==0){
    v.push_back(*arr);
  }
  solve(arr+1,n-1,v);
  

}
int main(){
  int n = 10;
  int arr[10] = {12,23,34,45,56,67,78,89,90,10};
  vector<int>v;
  solve(arr,n,v);
  for(int n:v){
    cout<<n<<" ";
  }
}