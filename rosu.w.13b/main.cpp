#include <cmath>
#include <iostream>
using namespace std;
int invers(int x) {
  int y = 0;
  while (x != 0) {
    y = y * 10 + x % 10;
    x = x / 10;
  }
  return y;
}
int main() {
  int x, k = 3, a, n;
  cin >> x;
  a = invers(x);
  n = a % 100;
  while (k != 0) {
    a = a / 10;
    k--;
  }
  a = a * 100 + n;
  cout << invers(a);
  return 0;
}
