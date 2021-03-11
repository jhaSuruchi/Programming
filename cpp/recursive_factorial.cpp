#include <iostream>
using namespace std;

int recursive_factorial(int n){
  int m = 1;
  if( m == n){
    return m;
  }
  return n * recursive_factorial(n-1);

}

int main() {
  int n;
  cout << "Number: ";
  cin >> n;
  cout << n << "! = " << recursive_factorial(n);

}