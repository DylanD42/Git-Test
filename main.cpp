#include <iostream>

using namespace std;

int sum(int n);

int main() {
  int n;
  int product = 1;
  cout << "Enter a number: ";
  cin >> n;
  cout << endl << "Sum: " << sum(n) << endl;
  for(int i = 1; i <= n; ++i){
    product *= i;    
  }
  cout << endl << "Product: " << product << endl;
  return 0;
}

int sum(int n){
  int total = 0;
  for(int i = 1; i <= n; i++){
    total += i;
  };
  return total;
}
