#include <iostream>
using namespace std;

bool isPrimeNumber(int num){
  for(int i = 2; i*i <= num; i++){
    if(num % i == 0)
    return false;
  }
  return true;
}

int main() {

  int n;
  cout << "Number: ";
  cin >> n;
  bool isPrime = isPrimeNumber(n);
  if(isPrime){
    cout << "Prime number";
  }
  else{
    cout <<"Not prime number";
  }


}