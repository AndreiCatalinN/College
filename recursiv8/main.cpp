#include <iostream>

using namespace std;
int par(int x) {
  if (x > 0) {
    if (x % 2 == 0)
      return 1 + par(x / 10);
    else
      return 0 + par(x / 10);
  }
}
int main() {
  int x;
  cin >> x;
  cout << par(x);
  return 0;
}
