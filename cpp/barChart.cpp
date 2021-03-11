#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Bar Chart Size: ";
  cin >> n;

  char symbol;
  cout << "Symbol: ";
  cin >> symbol;

  int* barChart = new int[n];
  for(int i = 0; i < n; i++){
    cout << "Bar Chart Element " << i+1 << " = ";
    cin >> barChart[i];
  }

  int max = barChart[0];

  for(int i = 0; i < n; i++){
    if(barChart[i] > max){
      max = barChart[i];
    }
  }

  for(int i = max; i >= 1; i--){
    for(int j = 0; j < n; j++){
      if(barChart[j] >= i){
        cout << symbol << "\t";
      }
      else{
        cout << "\t";
      }
    }
    cout << endl;
  }
}