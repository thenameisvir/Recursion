#include<iostream>
using namespace std;

bool issort(int n, int arr[], int i) {
  if(i >= n) return true;

  if(arr[i] < arr[i-1]) return false;

  return issort(n, arr, i+1);
}

int main() {
  int n = 10;
  int arr[10] = {1, 2, 3, 5, 4, 6, 7, 8, 9, 10};
  int i = 1;
  
  bool sorted = issort(n, arr, i);

  if(sorted) {
    cout << "Sorted";
  } else {
    cout << "Unsorted";
  }

  return 0;
}
