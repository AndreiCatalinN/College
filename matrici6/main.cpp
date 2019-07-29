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
  int i, j, m, n, s = 0, v[31];
  f >> m >> n;
  for (i = 1; i <= m; i++) {
    s = 0;
    for (j = 1; j <= n; j++) {
      f >> a[i][j];
      s += a[i][j];
    }
    v[i] = s;
  }
  for (i = 1; i < n; i++)
    for (j = i + 1; j <= m; j++)
      if (v[i] == v[j])
        cout << "(" << i << ", " << j << ")" << endl;
  f.close();
  return 0;
}
