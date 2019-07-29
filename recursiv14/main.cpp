#include <cmath>
#include <iostream>
using namespace std;
int pp(int x) {
  if (x > 0)
    if (sqrt(x) == (int)sqrt(x))
      return x;
    else
      return pp(x - 1);
}
int main() {
  int x;
  cin >> x;
  cout << pp(x);
  return 0;
}
