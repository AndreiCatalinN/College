#include <iostream>

using namespace std;

int main() {
  int i, j, a[16][16], n;
  cin >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++) {
      if (j < n - i + 1 && i < j)
        a[i][j] = 1;
      else if (j > n - i + 1 && j > i || j < i && j < n - i + 1)
        a[i][j] = 3;
      else if (j > n - i + 1 && j < i)
        a[i][j] = 2;
      else if (i + j == n + 1 || i == j)
        a[i][j] = 0;
    }
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}
