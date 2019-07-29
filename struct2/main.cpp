#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int a[100], b[100];
void citire() {
  int i, n, m;
  f >> n >> m;
  for (i = 1; i <= n; i++)
    f >> a[i];
  for (i = 1; i <= m; i++)
    f >> a[i];
}
void ordonare(int v[100], int n) {
  for (int i = 1; i <= n; i++)
    for (int j = i + 1, j <= n; j++)
      if (v[i] > v[j]) {
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
}
void greedy() {
  i = n, j = m;
  while (i > 0 && j > 0) {
    if (v[i] > 0 && v[j] > 0)
      s = s + v[i] * v[j];
    i--;
    j--;
  }
  while ()
}
int main() {
  int n, i;
  citire();
  ordonare(a, n);
  ordonare(b, m);

  return 0;
}
