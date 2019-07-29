#include <iostream>

using namespace std;
int s, x;
int main() {
  cout << "x=";
  cin >> x;
  cout << endl;
  s = 0;
  while (x != 0) {
    s = s + x % 10;
    x = x / 10;
  }
  cout << "suma cifrelor lui x: " << s;

  return 0;
}
