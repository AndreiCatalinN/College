#include <iostream>

using namespace std;

int main() {
  int j, i, n, a[25][25];

  cin >> n;
  for (j = 1; j <= n; j++)
    for (i = 1; i <= n; i++) {
      if (i + j < n + 1)
        a[j][i] = i;
      else if (i + j > n + 1)
        a[i][j] = n - i + 1;
      else if (i + j == n + 1)
        a[j][i] = 0;
    }
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}
