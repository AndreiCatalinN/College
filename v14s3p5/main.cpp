#include <iostream>

using namespace std;
int nr_cif(int a) {
  int k = 0;
  while (a != 0) {
    k++;
    a = a / 10;
  }
  return k;
}
int main() {
  int x, a[9][9], i, j;
  cin >> x;
  int n = nr_cif(x);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      a[j][i] = x % 10;
    }
    x = x / 10;
  }
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}
