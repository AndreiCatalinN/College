#include <iostream>

using namespace std;

int main() {
  int n, k, m;
  cin >> n >> k;
  m = n * k;
  while (k != 0) {
    cout << m << " ";
    m = m - n;
    k--;
  }
  return 0;
}
