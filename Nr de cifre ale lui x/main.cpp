#include <iostream>

using namespace std;
int x, k, s, y;
int main() {
  cout << "x=";
  cin >> x;
  cout << endl;
  k = 0;
  while (x != 0) {
    k++;
    x = x / 10;
  }
  cout << "NR de cifre: " << k << endl;

  return 0;
}
