#include<iostream>
#include<vector>
using namespace std;
void reverse(int n,vector<int>&v){
  if(n==0) return;
  int ans = n%10;
  n/=10;
  reverse(n,v);
  v.push_back(ans);
  
}
int main(){
  int n;
  cin>>n;
  vector<int>v;
  reverse(n,v);
  for(int n:v){
    cout<<n<<" ";
  }
}