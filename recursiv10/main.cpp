#include <iostream>

using namespace std;
void div(int x, int i) {
  if (i <= x) {
    if (x % i == 0)
      cout << i << " ";
    div(x, i + 1);
  }
}
int main() {
  int i = 1, x;
  cin >> x;
  div(x, i);
  return 0;
}
