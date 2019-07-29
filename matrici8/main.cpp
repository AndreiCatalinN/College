#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int a[26][26], n;
int main() {
  int i, j, max = a[1][1];
  f >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++) {
      f >> a[i][j];
      if (i == 1 || i == n || j == n || j == 1)
        if (max < a[i][j])
          max = a[i][j];
    }

  cout << max;
  f.close();
  return 0;
}
