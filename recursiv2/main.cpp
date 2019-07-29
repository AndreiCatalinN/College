/*
Program description: Using recursivity,
computes the inverse of a number

Author: Andrei Negura
IDE: Code Blocks
*/
#include <iostream>

using namespace std;
int invers(int n, int m) {
  if (n > 0) {
    m = m * 10 + n % 10;
    return invers(n / 10, m);
  }
}
int main() {
  int m = 0, n;
  cin >> n;
  cout << invers(n, m);
  return 0;
}
