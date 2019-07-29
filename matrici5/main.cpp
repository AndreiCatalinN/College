/*
Program Description:
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int a[31][31];
int main() {
  int i, j, m, n, si = 0, sj = 0, s = 0;
  f >> m >> n;
  // Reads and calculates the sum in the entire 2D array
  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++) {
      f >> a[i][j];
      s = s + a[i][j];
    }

  // Calculates the sum of the last column
  for (j = 1; j <= n; j++)
    si = si + a[n][j];
  // Calculates the sum of the last row
  for (i = 1; i <= m; i++)
    sj = sj + a[i][m];
  // Builds an extra column which
  // is equal to the sum of the last column
  for (i = 1; i <= m; i++)
    a[n + 1][i] = si;
  // Builds an extra row which
  // is equal to the sum of the last row
  for (j = 1; j <= n; j++)
    a[j][m + 1] = sj;
  // Increase m an n to reflext the new size of the 2D array
  n++;
  m++;
  // Last element in the corner
  // is equal to the sum of the whole array
  a[m][n] = s;

  // Print array
  for (i = 1; i <= m; i++) {
    for (j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  f.close();
  return 0;
}
