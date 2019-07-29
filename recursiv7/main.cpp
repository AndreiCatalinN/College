#include <iostream>

using namespace std;
int cm;
int max(int x) {
  int a;
  if (x > 0) {
    a = x % 10;
    if (a < cm) {
      cm = a;
      return max(x / 10, cm);
    }
  }
  return cm;
}

int main() {
  int a;
  a = max(143, cm);
  cout << a;
  return 0;
}
