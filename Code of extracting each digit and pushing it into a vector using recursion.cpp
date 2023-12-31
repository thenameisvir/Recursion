#include<iostream>
#include<vector>
using namespace std;
int ret(int n,vector<int>&v){
  int num = 0;
  if(n==0) return 0;
  num = n%10;
  n/=10;
  v.push_back(num);
  return ret(n,v);

}
int main(){
  int n;
  cin>>n;
  vector<int>v;
  ret(n,v);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}