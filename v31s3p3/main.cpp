#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int suma(int n, int m, int v[100]) {
  int a, i, j, s = 0;
  for (i = 1; i < n; i++)
    for (j = i + 1; j <= n; j++)
      if (v[i] > v[j]) {
        a = v[i];
        v[i] = v[j];
        v[j] = a;
      }
  for (i = 1; i <= m; i++)
    s = s + v[i];
  return s;
}

int main() {
  int n, v[100], i, m;
  f >> n >> m;
  for (i = 1; i <= n; i++)
    f >> v[i];
  cout << suma(n, m, v);
  f.close();
  return 0;
}
