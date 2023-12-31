#include<iostream>
#include<climits>
using namespace std;
void findmax(int arr[],int n,int target,int index){
  if(n==0) return;
  if(arr[index]==target){
    cout<<index<<" ";
  }
  
  findmax(arr,n-1,target,index+1);

}
int main(){
  int n = 10;
  int target = 5;
  int index = 0;
  int arr[10] = {1,2,5,4,5,5,5,8,9,5};
  findmax(arr,n,target,index);
}