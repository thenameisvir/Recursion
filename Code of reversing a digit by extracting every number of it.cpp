#include<iostream>
using namespace std;
void reverse(int n){
  if(n==0) return;
  int ans = n%10;
  n/=10;
  reverse(n);
  cout<<ans<<" ";
}
int main(){
  int n;
  cin>>n;
  reverse(n);

}