#include<iostream>
#include<math.h>
using namespace std;

int power(int n){
  if(n==0){
    return 1;
  }
  int num = pow(2, n-1);
  return num;
}

int main()
{
  cout << power(5);
}
