#include <fstream>
#include <iostream>
using namespace std;
int dist(int a[100], int n) {
  int i, j;
  for (i = 1; i <= n; i++)
    for (j = i + 1; j <= n; j++) {
      if (a[i] != a[j])
        if (a[j] - a[i] != 1)
          return 1;
        else
          return 0;
      else
        return 0;
    }
}
int main() {
  int i, n, a[100];
  ifstream f("date.in");
  f >> n;
  for (i = 1; i <= n; i++)
    f >> a[i];
  cout << dist(a, n);
  f.close();
  return 0;
}
