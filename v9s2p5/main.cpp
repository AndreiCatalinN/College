#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int i, j, n, a[25][25];
  f >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      f >> a[i][j];
  for (j = 1; j <= n; j++)
    cout << a[1][j] << " ";
  for (i = 2; i <= n; i++)
    cout << a[i][n] << " ";
  for (j = n - 1; j >= 1; j--)
    cout << a[n][j] << " ";
  for (i = n - 1; i >= 2; i--)
    cout << a[i][1] << " ";
  f.close();
  return 0;
}
