/*
Program Description:
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int a[31][31], fr[901];
int main() {
  int i, j, m, n, ok = 1;

  f >> m >> n;
  // Read 2D array and build a frequency array
  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++) {
      f >> a[i][j];
      fr[a[i][j]]++;
    }

  for (i = 0; i <= 900; i++)
    if (fr[i] > 1)
      ok = 0;

  if (ok == 0)
    cout << "Nu";
  else
    cout << "Da";
  f.close();
  return 0;
}
